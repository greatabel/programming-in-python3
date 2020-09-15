from unicodedata import normalize
from urllib.parse import unquote_plus
from re import compile
from contextlib import suppress
import os

# https://www.jianshu.com/p/fbe28e6415f3
Url_Path = compile(r'\%[0-9A-E]{2}')    # URL 乱码的正则表达式，形如 %E9
 
Codes = 'utf8', 'gbk', 'big5'           # 常见编码清单
 
 
def decode(data: bytes)->str:
    '''对二进制数据按指定的编码进行尝试解码后返回字符串，
    解码失败，则触发 UnicodeDecodeError 异常'''
    for code in Codes:
        with suppress(UnicodeDecodeError):
            return data.decode(code)     # 成功解码返回字符串
    raise UnicodeDecodeError             # 失败触发异常
 
 
def repare_name(name: str)->str:
    '''修改文件名乱码,
    返回正常的字符串'''
    if Url_Path.search(name):          # 判断文件名中是否有 URL 字符
        name = unquote_plus(name)      # 对 URL 文件名进行转码
    else:
        if os.name == 'posix':         # MacOS 系统中对重音字母进行压缩
            name = normalize('NFC', name)
        with suppress(UnicodeEncodeError):
            data = name.encode('latin1') # 将字符串转换成二进制，包含汉字的字符串会跳过
            name = decode(data)          # 对转换的二进制数据进行解码
    return name
 
 
if __name__ == '__main__':
    path_need_process = '/Users/abel/Desktop/luzhu/写作训练'
    from pathlib import Path
    for path in Path(path_need_process).glob('*.*'):
        new_name = repare_name(path.name)
        if path.name != new_name:
            print(path.name, '-> '*5, new_name)
            os.rename(path_need_process + '/' + path.name, 
                      path_need_process + '/' + new_name)