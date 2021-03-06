# Example of a metaclass that takes optional arguments

class MyMeta(type):
    # Optional
    @classmethod
    def __prepare__(cls, name, bases, *, debug=False, synchronize=False):
        print('in MyMeta __prepare__ debug=',debug,' synchronize=',synchronize)
        # Custom processing
        return super().__prepare__(name, bases)

    # Required
    def __new__(cls, name, bases, ns, *, debug=False, synchronize=False):
        print('in MyMeta __new__ debug=',debug,' synchronize=',synchronize)
        # Custom processing
        return super().__new__(cls, name, bases, ns)
        
    def __init__(self, name, bases, ns, *, debug=False, synchronize=False):
        print('in MyMeta __init__ debug=',debug,' synchronize=',synchronize,'\n')
        # Custom processing
        super().__init__(name, bases, ns)

# Examples
class A(metaclass=MyMeta, debug=True, synchronize=True):
    pass

class B(metaclass=MyMeta):
    pass

class C(metaclass=MyMeta, synchronize=True):
    pass

if __name__ == "__main__":
    a = A()
    b = B()
    c = C()