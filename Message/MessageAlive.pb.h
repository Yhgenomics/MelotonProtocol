// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageAlive.proto

#ifndef PROTOBUF_MessageAlive_2eproto__INCLUDED
#define PROTOBUF_MessageAlive_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageAlive_2eproto();
void protobuf_AssignDesc_MessageAlive_2eproto();
void protobuf_ShutdownFile_MessageAlive_2eproto();

class MessageAlive;

// ===================================================================

class MessageAlive : public ::google::protobuf::Message {
 public:
  MessageAlive();
  virtual ~MessageAlive();

  MessageAlive(const MessageAlive& from);

  inline MessageAlive& operator=(const MessageAlive& from) {
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
  static const MessageAlive& default_instance();

  void Swap(MessageAlive* other);

  // implements Message ----------------------------------------------

  MessageAlive* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageAlive& from);
  void MergeFrom(const MessageAlive& from);
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

  // required int32 CPU = 1;
  inline bool has_cpu() const;
  inline void clear_cpu();
  static const int kCPUFieldNumber = 1;
  inline ::google::protobuf::int32 cpu() const;
  inline void set_cpu(::google::protobuf::int32 value);

  // required int64 Memory = 2;
  inline bool has_memory() const;
  inline void clear_memory();
  static const int kMemoryFieldNumber = 2;
  inline ::google::protobuf::int64 memory() const;
  inline void set_memory(::google::protobuf::int64 value);

  // required int64 BlockCount = 3;
  inline bool has_blockcount() const;
  inline void clear_blockcount();
  static const int kBlockCountFieldNumber = 3;
  inline ::google::protobuf::int64 blockcount() const;
  inline void set_blockcount(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:MessageAlive)
 private:
  inline void set_has_cpu();
  inline void clear_has_cpu();
  inline void set_has_memory();
  inline void clear_has_memory();
  inline void set_has_blockcount();
  inline void clear_has_blockcount();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 memory_;
  ::google::protobuf::int64 blockcount_;
  ::google::protobuf::int32 cpu_;
  friend void  protobuf_AddDesc_MessageAlive_2eproto();
  friend void protobuf_AssignDesc_MessageAlive_2eproto();
  friend void protobuf_ShutdownFile_MessageAlive_2eproto();

  void InitAsDefaultInstance();
  static MessageAlive* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageAlive

// required int32 CPU = 1;
inline bool MessageAlive::has_cpu() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageAlive::set_has_cpu() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageAlive::clear_has_cpu() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageAlive::clear_cpu() {
  cpu_ = 0;
  clear_has_cpu();
}
inline ::google::protobuf::int32 MessageAlive::cpu() const {
  // @@protoc_insertion_point(field_get:MessageAlive.CPU)
  return cpu_;
}
inline void MessageAlive::set_cpu(::google::protobuf::int32 value) {
  set_has_cpu();
  cpu_ = value;
  // @@protoc_insertion_point(field_set:MessageAlive.CPU)
}

// required int64 Memory = 2;
inline bool MessageAlive::has_memory() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageAlive::set_has_memory() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageAlive::clear_has_memory() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageAlive::clear_memory() {
  memory_ = GOOGLE_LONGLONG(0);
  clear_has_memory();
}
inline ::google::protobuf::int64 MessageAlive::memory() const {
  // @@protoc_insertion_point(field_get:MessageAlive.Memory)
  return memory_;
}
inline void MessageAlive::set_memory(::google::protobuf::int64 value) {
  set_has_memory();
  memory_ = value;
  // @@protoc_insertion_point(field_set:MessageAlive.Memory)
}

// required int64 BlockCount = 3;
inline bool MessageAlive::has_blockcount() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageAlive::set_has_blockcount() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageAlive::clear_has_blockcount() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageAlive::clear_blockcount() {
  blockcount_ = GOOGLE_LONGLONG(0);
  clear_has_blockcount();
}
inline ::google::protobuf::int64 MessageAlive::blockcount() const {
  // @@protoc_insertion_point(field_get:MessageAlive.BlockCount)
  return blockcount_;
}
inline void MessageAlive::set_blockcount(::google::protobuf::int64 value) {
  set_has_blockcount();
  blockcount_ = value;
  // @@protoc_insertion_point(field_set:MessageAlive.BlockCount)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageAlive_2eproto__INCLUDED
