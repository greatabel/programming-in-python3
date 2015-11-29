// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: measurement.proto

#ifndef PROTOBUF_measurement_2eproto__INCLUDED
#define PROTOBUF_measurement_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_measurement_2eproto();
void protobuf_AssignDesc_measurement_2eproto();
void protobuf_ShutdownFile_measurement_2eproto();

class Measurement;

// ===================================================================

class Measurement : public ::google::protobuf::Message {
 public:
  Measurement();
  virtual ~Measurement();

  Measurement(const Measurement& from);

  inline Measurement& operator=(const Measurement& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Measurement& default_instance();

  void Swap(Measurement* other);

  // implements Message ----------------------------------------------

  Measurement* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Measurement& from);
  void MergeFrom(const Measurement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes image = 1;
  inline bool has_image() const;
  inline void clear_image();
  static const int kImageFieldNumber = 1;
  inline const ::std::string& image() const;
  inline void set_image(const ::std::string& value);
  inline void set_image(const char* value);
  inline void set_image(const void* value, size_t size);
  inline ::std::string* mutable_image();
  inline ::std::string* release_image();
  inline void set_allocated_image(::std::string* image);

  // optional bool side_a = 2;
  inline bool has_side_a() const;
  inline void clear_side_a();
  static const int kSideAFieldNumber = 2;
  inline bool side_a() const;
  inline void set_side_a(bool value);

  // optional bool side_b = 3;
  inline bool has_side_b() const;
  inline void clear_side_b();
  static const int kSideBFieldNumber = 3;
  inline bool side_b() const;
  inline void set_side_b(bool value);

  // @@protoc_insertion_point(class_scope:Measurement)
 private:
  inline void set_has_image();
  inline void clear_has_image();
  inline void set_has_side_a();
  inline void clear_has_side_a();
  inline void set_has_side_b();
  inline void clear_has_side_b();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* image_;
  bool side_a_;
  bool side_b_;
  friend void  protobuf_AddDesc_measurement_2eproto();
  friend void protobuf_AssignDesc_measurement_2eproto();
  friend void protobuf_ShutdownFile_measurement_2eproto();

  void InitAsDefaultInstance();
  static Measurement* default_instance_;
};
// ===================================================================


// ===================================================================

// Measurement

// optional bytes image = 1;
inline bool Measurement::has_image() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Measurement::set_has_image() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Measurement::clear_has_image() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Measurement::clear_image() {
  if (image_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_->clear();
  }
  clear_has_image();
}
inline const ::std::string& Measurement::image() const {
  // @@protoc_insertion_point(field_get:Measurement.image)
  return *image_;
}
inline void Measurement::set_image(const ::std::string& value) {
  set_has_image();
  if (image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_ = new ::std::string;
  }
  image_->assign(value);
  // @@protoc_insertion_point(field_set:Measurement.image)
}
inline void Measurement::set_image(const char* value) {
  set_has_image();
  if (image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_ = new ::std::string;
  }
  image_->assign(value);
  // @@protoc_insertion_point(field_set_char:Measurement.image)
}
inline void Measurement::set_image(const void* value, size_t size) {
  set_has_image();
  if (image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_ = new ::std::string;
  }
  image_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Measurement.image)
}
inline ::std::string* Measurement::mutable_image() {
  set_has_image();
  if (image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    image_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Measurement.image)
  return image_;
}
inline ::std::string* Measurement::release_image() {
  clear_has_image();
  if (image_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = image_;
    image_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Measurement::set_allocated_image(::std::string* image) {
  if (image_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete image_;
  }
  if (image) {
    set_has_image();
    image_ = image;
  } else {
    clear_has_image();
    image_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Measurement.image)
}

// optional bool side_a = 2;
inline bool Measurement::has_side_a() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Measurement::set_has_side_a() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Measurement::clear_has_side_a() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Measurement::clear_side_a() {
  side_a_ = false;
  clear_has_side_a();
}
inline bool Measurement::side_a() const {
  // @@protoc_insertion_point(field_get:Measurement.side_a)
  return side_a_;
}
inline void Measurement::set_side_a(bool value) {
  set_has_side_a();
  side_a_ = value;
  // @@protoc_insertion_point(field_set:Measurement.side_a)
}

// optional bool side_b = 3;
inline bool Measurement::has_side_b() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Measurement::set_has_side_b() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Measurement::clear_has_side_b() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Measurement::clear_side_b() {
  side_b_ = false;
  clear_has_side_b();
}
inline bool Measurement::side_b() const {
  // @@protoc_insertion_point(field_get:Measurement.side_b)
  return side_b_;
}
inline void Measurement::set_side_b(bool value) {
  set_has_side_b();
  side_b_ = value;
  // @@protoc_insertion_point(field_set:Measurement.side_b)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_measurement_2eproto__INCLUDED
