// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBlockData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageBlockData.pb.h"

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

const ::google::protobuf::Descriptor* MessageBlockData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageBlockData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageBlockData_2eproto() {
  protobuf_AddDesc_MessageBlockData_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageBlockData.proto");
  GOOGLE_CHECK(file != NULL);
  MessageBlockData_descriptor_ = file->message_type(0);
  static const int MessageBlockData_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockData, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockData, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockData, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockData, offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockData, checksum_),
  };
  MessageBlockData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageBlockData_descriptor_,
      MessageBlockData::default_instance_,
      MessageBlockData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageBlockData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageBlockData_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageBlockData_descriptor_, &MessageBlockData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageBlockData_2eproto() {
  delete MessageBlockData::default_instance_;
  delete MessageBlockData_reflection_;
}

void protobuf_AddDesc_MessageBlockData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026MessageBlockData.proto\"_\n\020MessageBlock"
    "Data\022\r\n\005Token\030\001 \002(\t\022\014\n\004Data\030\002 \002(\014\022\014\n\004Siz"
    "e\030\003 \002(\003\022\016\n\006Offset\030\004 \002(\003\022\020\n\010Checksum\030\005 \002("
    "\003", 121);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageBlockData.proto", &protobuf_RegisterTypes);
  MessageBlockData::default_instance_ = new MessageBlockData();
  MessageBlockData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageBlockData_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageBlockData_2eproto {
  StaticDescriptorInitializer_MessageBlockData_2eproto() {
    protobuf_AddDesc_MessageBlockData_2eproto();
  }
} static_descriptor_initializer_MessageBlockData_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageBlockData::kTokenFieldNumber;
const int MessageBlockData::kDataFieldNumber;
const int MessageBlockData::kSizeFieldNumber;
const int MessageBlockData::kOffsetFieldNumber;
const int MessageBlockData::kChecksumFieldNumber;
#endif  // !_MSC_VER

MessageBlockData::MessageBlockData()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageBlockData)
}

void MessageBlockData::InitAsDefaultInstance() {
}

MessageBlockData::MessageBlockData(const MessageBlockData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageBlockData)
}

void MessageBlockData::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  size_ = GOOGLE_LONGLONG(0);
  offset_ = GOOGLE_LONGLONG(0);
  checksum_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageBlockData::~MessageBlockData() {
  // @@protoc_insertion_point(destructor:MessageBlockData)
  SharedDtor();
}

void MessageBlockData::SharedDtor() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void MessageBlockData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageBlockData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageBlockData_descriptor_;
}

const MessageBlockData& MessageBlockData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageBlockData_2eproto();
  return *default_instance_;
}

MessageBlockData* MessageBlockData::default_instance_ = NULL;

MessageBlockData* MessageBlockData::New() const {
  return new MessageBlockData;
}

void MessageBlockData::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MessageBlockData*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(size_, checksum_);
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        token_->clear();
      }
    }
    if (has_data()) {
      if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        data_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageBlockData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageBlockData)
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
        if (input->ExpectTag(18)) goto parse_Data;
        break;
      }

      // required bytes Data = 2;
      case 2: {
        if (tag == 18) {
         parse_Data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
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
        if (input->ExpectTag(32)) goto parse_Offset;
        break;
      }

      // required int64 Offset = 4;
      case 4: {
        if (tag == 32) {
         parse_Offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &offset_)));
          set_has_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_Checksum;
        break;
      }

      // required int64 Checksum = 5;
      case 5: {
        if (tag == 40) {
         parse_Checksum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &checksum_)));
          set_has_checksum();
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
  // @@protoc_insertion_point(parse_success:MessageBlockData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageBlockData)
  return false;
#undef DO_
}

void MessageBlockData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageBlockData)
  // required string Token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->token(), output);
  }

  // required bytes Data = 2;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->data(), output);
  }

  // required int64 Size = 3;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->size(), output);
  }

  // required int64 Offset = 4;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->offset(), output);
  }

  // required int64 Checksum = 5;
  if (has_checksum()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->checksum(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageBlockData)
}

::google::protobuf::uint8* MessageBlockData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageBlockData)
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

  // required bytes Data = 2;
  if (has_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->data(), target);
  }

  // required int64 Size = 3;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->size(), target);
  }

  // required int64 Offset = 4;
  if (has_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->offset(), target);
  }

  // required int64 Checksum = 5;
  if (has_checksum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->checksum(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageBlockData)
  return target;
}

int MessageBlockData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string Token = 1;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

    // required bytes Data = 2;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }

    // required int64 Size = 3;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->size());
    }

    // required int64 Offset = 4;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->offset());
    }

    // required int64 Checksum = 5;
    if (has_checksum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->checksum());
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

void MessageBlockData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageBlockData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageBlockData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageBlockData::MergeFrom(const MessageBlockData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_token()) {
      set_token(from.token());
    }
    if (from.has_data()) {
      set_data(from.data());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
    if (from.has_offset()) {
      set_offset(from.offset());
    }
    if (from.has_checksum()) {
      set_checksum(from.checksum());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageBlockData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageBlockData::CopyFrom(const MessageBlockData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageBlockData::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void MessageBlockData::Swap(MessageBlockData* other) {
  if (other != this) {
    std::swap(token_, other->token_);
    std::swap(data_, other->data_);
    std::swap(size_, other->size_);
    std::swap(offset_, other->offset_);
    std::swap(checksum_, other->checksum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageBlockData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageBlockData_descriptor_;
  metadata.reflection = MessageBlockData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)