// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessagePrepareReadACK.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessagePrepareReadACK.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MessagePrepareReadACK_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessagePrepareReadACK_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessagePrepareReadACK_2eproto() {
  protobuf_AddDesc_MessagePrepareReadACK_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessagePrepareReadACK.proto");
  GOOGLE_CHECK(file != NULL);
  MessagePrepareReadACK_descriptor_ = file->message_type(0);
  static const int MessagePrepareReadACK_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePrepareReadACK, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePrepareReadACK, block_),
  };
  MessagePrepareReadACK_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessagePrepareReadACK_descriptor_,
      MessagePrepareReadACK::default_instance_,
      MessagePrepareReadACK_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePrepareReadACK, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessagePrepareReadACK, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessagePrepareReadACK));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessagePrepareReadACK_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessagePrepareReadACK_descriptor_, &MessagePrepareReadACK::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessagePrepareReadACK_2eproto() {
  delete MessagePrepareReadACK::default_instance_;
  delete MessagePrepareReadACK_reflection_;
}

void protobuf_AddDesc_MessagePrepareReadACK_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_MessageBlockMeta_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033MessagePrepareReadACK.proto\032\026MessageBl"
    "ockMeta.proto\"H\n\025MessagePrepareReadACK\022\r"
    "\n\005Token\030\001 \002(\t\022 \n\005Block\030\002 \002(\0132\021.MessageBl"
    "ockMeta", 127);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessagePrepareReadACK.proto", &protobuf_RegisterTypes);
  MessagePrepareReadACK::default_instance_ = new MessagePrepareReadACK();
  MessagePrepareReadACK::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessagePrepareReadACK_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessagePrepareReadACK_2eproto {
  StaticDescriptorInitializer_MessagePrepareReadACK_2eproto() {
    protobuf_AddDesc_MessagePrepareReadACK_2eproto();
  }
} static_descriptor_initializer_MessagePrepareReadACK_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessagePrepareReadACK::kTokenFieldNumber;
const int MessagePrepareReadACK::kBlockFieldNumber;
#endif  // !_MSC_VER

MessagePrepareReadACK::MessagePrepareReadACK()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessagePrepareReadACK)
}

void MessagePrepareReadACK::InitAsDefaultInstance() {
  block_ = const_cast< ::MessageBlockMeta*>(&::MessageBlockMeta::default_instance());
}

MessagePrepareReadACK::MessagePrepareReadACK(const MessagePrepareReadACK& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessagePrepareReadACK)
}

void MessagePrepareReadACK::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessagePrepareReadACK::~MessagePrepareReadACK() {
  // @@protoc_insertion_point(destructor:MessagePrepareReadACK)
  SharedDtor();
}

void MessagePrepareReadACK::SharedDtor() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (this != default_instance_) {
    delete block_;
  }
}

void MessagePrepareReadACK::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessagePrepareReadACK::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessagePrepareReadACK_descriptor_;
}

const MessagePrepareReadACK& MessagePrepareReadACK::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessagePrepareReadACK_2eproto();
  return *default_instance_;
}

MessagePrepareReadACK* MessagePrepareReadACK::default_instance_ = NULL;

MessagePrepareReadACK* MessagePrepareReadACK::New() const {
  return new MessagePrepareReadACK;
}

void MessagePrepareReadACK::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        token_->clear();
      }
    }
    if (has_block()) {
      if (block_ != NULL) block_->::MessageBlockMeta::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessagePrepareReadACK::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessagePrepareReadACK)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string Token = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "token");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Block;
        break;
      }

      // required .MessageBlockMeta Block = 2;
      case 2: {
        if (tag == 18) {
         parse_Block:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_block()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessagePrepareReadACK)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessagePrepareReadACK)
  return false;
#undef DO_
}

void MessagePrepareReadACK::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessagePrepareReadACK)
  // required string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->token(), output);
  }

  // required .MessageBlockMeta Block = 2;
  if (has_block()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->block(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessagePrepareReadACK)
}

::google::protobuf::uint8* MessagePrepareReadACK::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessagePrepareReadACK)
  // required string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->token(), target);
  }

  // required .MessageBlockMeta Block = 2;
  if (has_block()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->block(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessagePrepareReadACK)
  return target;
}

int MessagePrepareReadACK::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string Token = 1;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

    // required .MessageBlockMeta Block = 2;
    if (has_block()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->block());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessagePrepareReadACK::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessagePrepareReadACK* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessagePrepareReadACK*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessagePrepareReadACK::MergeFrom(const MessagePrepareReadACK& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_token()) {
      set_token(from.token());
    }
    if (from.has_block()) {
      mutable_block()->::MessageBlockMeta::MergeFrom(from.block());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessagePrepareReadACK::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessagePrepareReadACK::CopyFrom(const MessagePrepareReadACK& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessagePrepareReadACK::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_block()) {
    if (!this->block().IsInitialized()) return false;
  }
  return true;
}

void MessagePrepareReadACK::Swap(MessagePrepareReadACK* other) {
  if (other != this) {
    std::swap(token_, other->token_);
    std::swap(block_, other->block_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessagePrepareReadACK::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessagePrepareReadACK_descriptor_;
  metadata.reflection = MessagePrepareReadACK_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)