// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageDeleteBlock.proto

#ifndef PROTOBUF_MessageDeleteBlock_2eproto__INCLUDED
#define PROTOBUF_MessageDeleteBlock_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageDeleteBlock_2eproto();
void protobuf_AssignDesc_MessageDeleteBlock_2eproto();
void protobuf_ShutdownFile_MessageDeleteBlock_2eproto();

class MessageDeleteBlock;

// ===================================================================

class MessageDeleteBlock : public ::google::protobuf::Message {
 public:
  MessageDeleteBlock();
  virtual ~MessageDeleteBlock();

  MessageDeleteBlock(const MessageDeleteBlock& from);

  inline MessageDeleteBlock& operator=(const MessageDeleteBlock& from) {
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
  static const MessageDeleteBlock& default_instance();

  void Swap(MessageDeleteBlock* other);

  // implements Message ----------------------------------------------

  MessageDeleteBlock* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageDeleteBlock& from);
  void MergeFrom(const MessageDeleteBlock& from);
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

  // required int64 Index = 1;
  inline bool has_index() const;
  inline void clear_index();
  static const int kIndexFieldNumber = 1;
  inline ::google::protobuf::int64 index() const;
  inline void set_index(::google::protobuf::int64 value);

  // required int64 ClientId = 2;
  inline bool has_clientid() const;
  inline void clear_clientid();
  static const int kClientIdFieldNumber = 2;
  inline ::google::protobuf::int64 clientid() const;
  inline void set_clientid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:MessageDeleteBlock)
 private:
  inline void set_has_index();
  inline void clear_has_index();
  inline void set_has_clientid();
  inline void clear_has_clientid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 index_;
  ::google::protobuf::int64 clientid_;
  friend void  protobuf_AddDesc_MessageDeleteBlock_2eproto();
  friend void protobuf_AssignDesc_MessageDeleteBlock_2eproto();
  friend void protobuf_ShutdownFile_MessageDeleteBlock_2eproto();

  void InitAsDefaultInstance();
  static MessageDeleteBlock* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageDeleteBlock

// required int64 Index = 1;
inline bool MessageDeleteBlock::has_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageDeleteBlock::set_has_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageDeleteBlock::clear_has_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageDeleteBlock::clear_index() {
  index_ = GOOGLE_LONGLONG(0);
  clear_has_index();
}
inline ::google::protobuf::int64 MessageDeleteBlock::index() const {
  // @@protoc_insertion_point(field_get:MessageDeleteBlock.Index)
  return index_;
}
inline void MessageDeleteBlock::set_index(::google::protobuf::int64 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:MessageDeleteBlock.Index)
}

// required int64 ClientId = 2;
inline bool MessageDeleteBlock::has_clientid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageDeleteBlock::set_has_clientid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageDeleteBlock::clear_has_clientid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageDeleteBlock::clear_clientid() {
  clientid_ = GOOGLE_LONGLONG(0);
  clear_has_clientid();
}
inline ::google::protobuf::int64 MessageDeleteBlock::clientid() const {
  // @@protoc_insertion_point(field_get:MessageDeleteBlock.ClientId)
  return clientid_;
}
inline void MessageDeleteBlock::set_clientid(::google::protobuf::int64 value) {
  set_has_clientid();
  clientid_ = value;
  // @@protoc_insertion_point(field_set:MessageDeleteBlock.ClientId)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageDeleteBlock_2eproto__INCLUDED