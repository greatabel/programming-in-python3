# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: measurement.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='measurement.proto',
  package='',
  serialized_pb=_b('\n\x11measurement.proto\"<\n\x0bMeasurement\x12\r\n\x05image\x18\x01 \x01(\x0c\x12\x0e\n\x06side_a\x18\x02 \x01(\x08\x12\x0e\n\x06side_b\x18\x03 \x01(\x08')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_MEASUREMENT = _descriptor.Descriptor(
  name='Measurement',
  full_name='Measurement',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='image', full_name='Measurement.image', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='side_a', full_name='Measurement.side_a', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='side_b', full_name='Measurement.side_b', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=21,
  serialized_end=81,
)

DESCRIPTOR.message_types_by_name['Measurement'] = _MEASUREMENT

Measurement = _reflection.GeneratedProtocolMessageType('Measurement', (_message.Message,), dict(
  DESCRIPTOR = _MEASUREMENT,
  __module__ = 'measurement_pb2'
  # @@protoc_insertion_point(class_scope:Measurement)
  ))
_sym_db.RegisterMessage(Measurement)


# @@protoc_insertion_point(module_scope)
