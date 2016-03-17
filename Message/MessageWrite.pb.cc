// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageWrite.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageWrite.pb.h"

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

const ::google::protobuf::Descriptor* MessageWrite_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageWrite_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageWrite_2eproto() {
  protobuf_AddDesc_MessageWrite_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageWrite.proto");
  GOOGLE_CHECK(file != NULL);
  MessageWrite_descriptor_ = file->message_type(0);
  static const int MessageWrite_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageWrite, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageWrite, offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageWrite, size_),
  };
  MessageWrite_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageWrite_descriptor_,
      MessageWrite::default_instance_,
      MessageWrite_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageWrite, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageWrite, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageWrite));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageWrite_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageWrite_descriptor_, &MessageWrite::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageWrite_2eproto() {
  delete MessageWrite::default_instance_;
  delete MessageWrite_reflection_;
}

void protobuf_AddDesc_MessageWrite_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022MessageWrite.proto\";\n\014MessageWrite\022\r\n\005"
    "Token\030\001 \002(\t\022\016\n\006Offset\030\002 \002(\003\022\014\n\004Size\030\003 \002("
    "\003", 81);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageWrite.proto", &protobuf_RegisterTypes);
  MessageWrite::default_instance_ = new MessageWrite();
  MessageWrite::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageWrite_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageWrite_2eproto {
  StaticDescriptorInitializer_MessageWrite_2eproto() {
    protobuf_AddDesc_MessageWrite_2eproto();
  }
} static_descriptor_initializer_MessageWrite_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageWrite::kTokenFieldNumber;
const int MessageWrite::kOffsetFieldNumber;
const int MessageWrite::kSizeFieldNumber;
#endif  // !_MSC_VER

MessageWrite::MessageWrite()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageWrite)
}

void MessageWrite::InitAsDefaultInstance() {
}

MessageWrite::MessageWrite(const MessageWrite& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageWrite)
}

void MessageWrite::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  offset_ = GOOGLE_LONGLONG(0);
  size_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageWrite::~MessageWrite() {
  // @@protoc_insertion_point(destructor:MessageWrite)
  SharedDtor();
}

void MessageWrite::SharedDtor() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (this != default_instance_) {
  }
}

void MessageWrite::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageWrite::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageWrite_descriptor_;
}

const MessageWrite& MessageWrite::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageWrite_2eproto();
  return *default_instance_;
}

MessageWrite* MessageWrite::default_instance_ = NULL;

MessageWrite* MessageWrite::New() const {
  return new MessageWrite;
}

void MessageWrite::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MessageWrite*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(offset_, size_);
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        token_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageWrite::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageWrite)
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
        if (input->ExpectTag(16)) goto parse_Offset;
        break;
      }

      // required int64 Offset = 2;
      case 2: {
        if (tag == 16) {
         parse_Offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &offset_)));
          set_has_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_Size;
        break;
      }

      // required int64 Size = 3;
      case 3: {
        if (tag == 24) {
         parse_Size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &size_)));
          set_has_size();
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
  // @@protoc_insertion_point(parse_success:MessageWrite)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageWrite)
  return false;
#undef DO_
}

void MessageWrite::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageWrite)
  // required string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->token(), output);
  }

  // required int64 Offset = 2;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->offset(), output);
  }

  // required int64 Size = 3;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->size(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageWrite)
}

::google::protobuf::uint8* MessageWrite::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageWrite)
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

  // required int64 Offset = 2;
  if (has_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->offset(), target);
  }

  // required int64 Size = 3;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->size(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageWrite)
  return target;
}

int MessageWrite::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string Token = 1;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

    // required int64 Offset = 2;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->offset());
    }

    // required int64 Size = 3;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->size());
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

void MessageWrite::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageWrite* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageWrite*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageWrite::MergeFrom(const MessageWrite& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_token()) {
      set_token(from.token());
    }
    if (from.has_offset()) {
      set_offset(from.offset());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageWrite::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageWrite::CopyFrom(const MessageWrite& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageWrite::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MessageWrite::Swap(MessageWrite* other) {
  if (other != this) {
    std::swap(token_, other->token_);
    std::swap(offset_, other->offset_);
    std::swap(size_, other->size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageWrite::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageWrite_descriptor_;
  metadata.reflection = MessageWrite_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
