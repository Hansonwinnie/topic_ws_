// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/2d/probability_grid_range_data_inserter_options_2d.proto

#include "cartographer/mapping/proto/2d/probability_grid_range_data_inserter_options_2d.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {
class ProbabilityGridRangeDataInserterOptions2DDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProbabilityGridRangeDataInserterOptions2D>
      _instance;
} _ProbabilityGridRangeDataInserterOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto {
static void InitDefaultsProbabilityGridRangeDataInserterOptions2D() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::cartographer::mapping::proto::_ProbabilityGridRangeDataInserterOptions2D_default_instance_;
    new (ptr) ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ProbabilityGridRangeDataInserterOptions2D =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProbabilityGridRangeDataInserterOptions2D}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ProbabilityGridRangeDataInserterOptions2D.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D, hit_probability_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D, miss_probability_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D, insert_free_space_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::cartographer::mapping::proto::_ProbabilityGridRangeDataInserterOptions2D_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "cartographer/mapping/proto/2d/probability_grid_range_data_inserter_options_2d.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\nScartographer/mapping/proto/2d/probabil"
      "ity_grid_range_data_inserter_options_2d."
      "proto\022\032cartographer.mapping.proto\"y\n)Pro"
      "babilityGridRangeDataInserterOptions2D\022\027"
      "\n\017hit_probability\030\001 \001(\001\022\030\n\020miss_probabil"
      "ity\030\002 \001(\001\022\031\n\021insert_free_space\030\003 \001(\010b\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 244);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/2d/probability_grid_range_data_inserter_options_2d.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto
namespace cartographer {
namespace mapping {
namespace proto {

// ===================================================================

void ProbabilityGridRangeDataInserterOptions2D::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProbabilityGridRangeDataInserterOptions2D::kHitProbabilityFieldNumber;
const int ProbabilityGridRangeDataInserterOptions2D::kMissProbabilityFieldNumber;
const int ProbabilityGridRangeDataInserterOptions2D::kInsertFreeSpaceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProbabilityGridRangeDataInserterOptions2D::ProbabilityGridRangeDataInserterOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::scc_info_ProbabilityGridRangeDataInserterOptions2D.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
}
ProbabilityGridRangeDataInserterOptions2D::ProbabilityGridRangeDataInserterOptions2D(const ProbabilityGridRangeDataInserterOptions2D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&hit_probability_, &from.hit_probability_,
    static_cast<size_t>(reinterpret_cast<char*>(&insert_free_space_) -
    reinterpret_cast<char*>(&hit_probability_)) + sizeof(insert_free_space_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
}

void ProbabilityGridRangeDataInserterOptions2D::SharedCtor() {
  ::memset(&hit_probability_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&insert_free_space_) -
      reinterpret_cast<char*>(&hit_probability_)) + sizeof(insert_free_space_));
}

ProbabilityGridRangeDataInserterOptions2D::~ProbabilityGridRangeDataInserterOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  SharedDtor();
}

void ProbabilityGridRangeDataInserterOptions2D::SharedDtor() {
}

void ProbabilityGridRangeDataInserterOptions2D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProbabilityGridRangeDataInserterOptions2D::descriptor() {
  ::protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProbabilityGridRangeDataInserterOptions2D& ProbabilityGridRangeDataInserterOptions2D::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::scc_info_ProbabilityGridRangeDataInserterOptions2D.base);
  return *internal_default_instance();
}


void ProbabilityGridRangeDataInserterOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&hit_probability_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&insert_free_space_) -
      reinterpret_cast<char*>(&hit_probability_)) + sizeof(insert_free_space_));
  _internal_metadata_.Clear();
}

bool ProbabilityGridRangeDataInserterOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double hit_probability = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &hit_probability_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double miss_probability = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &miss_probability_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool insert_free_space = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &insert_free_space_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  return false;
#undef DO_
}

void ProbabilityGridRangeDataInserterOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double hit_probability = 1;
  if (this->hit_probability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->hit_probability(), output);
  }

  // double miss_probability = 2;
  if (this->miss_probability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->miss_probability(), output);
  }

  // bool insert_free_space = 3;
  if (this->insert_free_space() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->insert_free_space(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
}

::google::protobuf::uint8* ProbabilityGridRangeDataInserterOptions2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double hit_probability = 1;
  if (this->hit_probability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->hit_probability(), target);
  }

  // double miss_probability = 2;
  if (this->miss_probability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->miss_probability(), target);
  }

  // bool insert_free_space = 3;
  if (this->insert_free_space() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->insert_free_space(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  return target;
}

size_t ProbabilityGridRangeDataInserterOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double hit_probability = 1;
  if (this->hit_probability() != 0) {
    total_size += 1 + 8;
  }

  // double miss_probability = 2;
  if (this->miss_probability() != 0) {
    total_size += 1 + 8;
  }

  // bool insert_free_space = 3;
  if (this->insert_free_space() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProbabilityGridRangeDataInserterOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  const ProbabilityGridRangeDataInserterOptions2D* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProbabilityGridRangeDataInserterOptions2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
    MergeFrom(*source);
  }
}

void ProbabilityGridRangeDataInserterOptions2D::MergeFrom(const ProbabilityGridRangeDataInserterOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.hit_probability() != 0) {
    set_hit_probability(from.hit_probability());
  }
  if (from.miss_probability() != 0) {
    set_miss_probability(from.miss_probability());
  }
  if (from.insert_free_space() != 0) {
    set_insert_free_space(from.insert_free_space());
  }
}

void ProbabilityGridRangeDataInserterOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProbabilityGridRangeDataInserterOptions2D::CopyFrom(const ProbabilityGridRangeDataInserterOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProbabilityGridRangeDataInserterOptions2D::IsInitialized() const {
  return true;
}

void ProbabilityGridRangeDataInserterOptions2D::Swap(ProbabilityGridRangeDataInserterOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProbabilityGridRangeDataInserterOptions2D::InternalSwap(ProbabilityGridRangeDataInserterOptions2D* other) {
  using std::swap;
  swap(hit_probability_, other->hit_probability_);
  swap(miss_probability_, other->miss_probability_);
  swap(insert_free_space_, other->insert_free_space_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProbabilityGridRangeDataInserterOptions2D::GetMetadata() const {
  protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* Arena::CreateMaybeMessage< ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D >(Arena* arena) {
  return Arena::CreateInternal< ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
