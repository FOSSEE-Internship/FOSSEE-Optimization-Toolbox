// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ortools/constraint_solver/routing_enums.proto

#ifndef PROTOBUF_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto__INCLUDED
#define PROTOBUF_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace operations_research {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();
void protobuf_AssignDesc_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();
void protobuf_ShutdownFile_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();

class FirstSolutionStrategy;
class LocalSearchMetaheuristic;

enum FirstSolutionStrategy_Value {
  FirstSolutionStrategy_Value_AUTOMATIC = 0,
  FirstSolutionStrategy_Value_PATH_CHEAPEST_ARC = 3,
  FirstSolutionStrategy_Value_PATH_MOST_CONSTRAINED_ARC = 4,
  FirstSolutionStrategy_Value_EVALUATOR_STRATEGY = 5,
  FirstSolutionStrategy_Value_SAVINGS = 10,
  FirstSolutionStrategy_Value_SWEEP = 11,
  FirstSolutionStrategy_Value_CHRISTOFIDES = 13,
  FirstSolutionStrategy_Value_ALL_UNPERFORMED = 6,
  FirstSolutionStrategy_Value_BEST_INSERTION = 7,
  FirstSolutionStrategy_Value_PARALLEL_CHEAPEST_INSERTION = 8,
  FirstSolutionStrategy_Value_LOCAL_CHEAPEST_INSERTION = 9,
  FirstSolutionStrategy_Value_GLOBAL_CHEAPEST_ARC = 1,
  FirstSolutionStrategy_Value_LOCAL_CHEAPEST_ARC = 2,
  FirstSolutionStrategy_Value_FIRST_UNBOUND_MIN_VALUE = 12,
  FirstSolutionStrategy_Value_FirstSolutionStrategy_Value_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  FirstSolutionStrategy_Value_FirstSolutionStrategy_Value_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool FirstSolutionStrategy_Value_IsValid(int value);
const FirstSolutionStrategy_Value FirstSolutionStrategy_Value_Value_MIN = FirstSolutionStrategy_Value_AUTOMATIC;
const FirstSolutionStrategy_Value FirstSolutionStrategy_Value_Value_MAX = FirstSolutionStrategy_Value_CHRISTOFIDES;
const int FirstSolutionStrategy_Value_Value_ARRAYSIZE = FirstSolutionStrategy_Value_Value_MAX + 1;

const ::google::protobuf::EnumDescriptor* FirstSolutionStrategy_Value_descriptor();
inline const ::std::string& FirstSolutionStrategy_Value_Name(FirstSolutionStrategy_Value value) {
  return ::google::protobuf::internal::NameOfEnum(
    FirstSolutionStrategy_Value_descriptor(), value);
}
inline bool FirstSolutionStrategy_Value_Parse(
    const ::std::string& name, FirstSolutionStrategy_Value* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FirstSolutionStrategy_Value>(
    FirstSolutionStrategy_Value_descriptor(), name, value);
}
enum LocalSearchMetaheuristic_Value {
  LocalSearchMetaheuristic_Value_AUTOMATIC = 0,
  LocalSearchMetaheuristic_Value_GREEDY_DESCENT = 1,
  LocalSearchMetaheuristic_Value_GUIDED_LOCAL_SEARCH = 2,
  LocalSearchMetaheuristic_Value_SIMULATED_ANNEALING = 3,
  LocalSearchMetaheuristic_Value_TABU_SEARCH = 4,
  LocalSearchMetaheuristic_Value_OBJECTIVE_TABU_SEARCH = 5,
  LocalSearchMetaheuristic_Value_LocalSearchMetaheuristic_Value_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LocalSearchMetaheuristic_Value_LocalSearchMetaheuristic_Value_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LocalSearchMetaheuristic_Value_IsValid(int value);
const LocalSearchMetaheuristic_Value LocalSearchMetaheuristic_Value_Value_MIN = LocalSearchMetaheuristic_Value_AUTOMATIC;
const LocalSearchMetaheuristic_Value LocalSearchMetaheuristic_Value_Value_MAX = LocalSearchMetaheuristic_Value_OBJECTIVE_TABU_SEARCH;
const int LocalSearchMetaheuristic_Value_Value_ARRAYSIZE = LocalSearchMetaheuristic_Value_Value_MAX + 1;

const ::google::protobuf::EnumDescriptor* LocalSearchMetaheuristic_Value_descriptor();
inline const ::std::string& LocalSearchMetaheuristic_Value_Name(LocalSearchMetaheuristic_Value value) {
  return ::google::protobuf::internal::NameOfEnum(
    LocalSearchMetaheuristic_Value_descriptor(), value);
}
inline bool LocalSearchMetaheuristic_Value_Parse(
    const ::std::string& name, LocalSearchMetaheuristic_Value* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LocalSearchMetaheuristic_Value>(
    LocalSearchMetaheuristic_Value_descriptor(), name, value);
}
// ===================================================================

class FirstSolutionStrategy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:operations_research.FirstSolutionStrategy) */ {
 public:
  FirstSolutionStrategy();
  virtual ~FirstSolutionStrategy();

  FirstSolutionStrategy(const FirstSolutionStrategy& from);

  inline FirstSolutionStrategy& operator=(const FirstSolutionStrategy& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FirstSolutionStrategy& default_instance();

  void Swap(FirstSolutionStrategy* other);

  // implements Message ----------------------------------------------

  inline FirstSolutionStrategy* New() const { return New(NULL); }

  FirstSolutionStrategy* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FirstSolutionStrategy& from);
  void MergeFrom(const FirstSolutionStrategy& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FirstSolutionStrategy* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef FirstSolutionStrategy_Value Value;
  static const Value AUTOMATIC =
    FirstSolutionStrategy_Value_AUTOMATIC;
  static const Value PATH_CHEAPEST_ARC =
    FirstSolutionStrategy_Value_PATH_CHEAPEST_ARC;
  static const Value PATH_MOST_CONSTRAINED_ARC =
    FirstSolutionStrategy_Value_PATH_MOST_CONSTRAINED_ARC;
  static const Value EVALUATOR_STRATEGY =
    FirstSolutionStrategy_Value_EVALUATOR_STRATEGY;
  static const Value SAVINGS =
    FirstSolutionStrategy_Value_SAVINGS;
  static const Value SWEEP =
    FirstSolutionStrategy_Value_SWEEP;
  static const Value CHRISTOFIDES =
    FirstSolutionStrategy_Value_CHRISTOFIDES;
  static const Value ALL_UNPERFORMED =
    FirstSolutionStrategy_Value_ALL_UNPERFORMED;
  static const Value BEST_INSERTION =
    FirstSolutionStrategy_Value_BEST_INSERTION;
  static const Value PARALLEL_CHEAPEST_INSERTION =
    FirstSolutionStrategy_Value_PARALLEL_CHEAPEST_INSERTION;
  static const Value LOCAL_CHEAPEST_INSERTION =
    FirstSolutionStrategy_Value_LOCAL_CHEAPEST_INSERTION;
  static const Value GLOBAL_CHEAPEST_ARC =
    FirstSolutionStrategy_Value_GLOBAL_CHEAPEST_ARC;
  static const Value LOCAL_CHEAPEST_ARC =
    FirstSolutionStrategy_Value_LOCAL_CHEAPEST_ARC;
  static const Value FIRST_UNBOUND_MIN_VALUE =
    FirstSolutionStrategy_Value_FIRST_UNBOUND_MIN_VALUE;
  static inline bool Value_IsValid(int value) {
    return FirstSolutionStrategy_Value_IsValid(value);
  }
  static const Value Value_MIN =
    FirstSolutionStrategy_Value_Value_MIN;
  static const Value Value_MAX =
    FirstSolutionStrategy_Value_Value_MAX;
  static const int Value_ARRAYSIZE =
    FirstSolutionStrategy_Value_Value_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Value_descriptor() {
    return FirstSolutionStrategy_Value_descriptor();
  }
  static inline const ::std::string& Value_Name(Value value) {
    return FirstSolutionStrategy_Value_Name(value);
  }
  static inline bool Value_Parse(const ::std::string& name,
      Value* value) {
    return FirstSolutionStrategy_Value_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:operations_research.FirstSolutionStrategy)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();
  friend void protobuf_AssignDesc_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();
  friend void protobuf_ShutdownFile_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();

  void InitAsDefaultInstance();
  static FirstSolutionStrategy* default_instance_;
};
// -------------------------------------------------------------------

class LocalSearchMetaheuristic : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:operations_research.LocalSearchMetaheuristic) */ {
 public:
  LocalSearchMetaheuristic();
  virtual ~LocalSearchMetaheuristic();

  LocalSearchMetaheuristic(const LocalSearchMetaheuristic& from);

  inline LocalSearchMetaheuristic& operator=(const LocalSearchMetaheuristic& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LocalSearchMetaheuristic& default_instance();

  void Swap(LocalSearchMetaheuristic* other);

  // implements Message ----------------------------------------------

  inline LocalSearchMetaheuristic* New() const { return New(NULL); }

  LocalSearchMetaheuristic* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LocalSearchMetaheuristic& from);
  void MergeFrom(const LocalSearchMetaheuristic& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LocalSearchMetaheuristic* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef LocalSearchMetaheuristic_Value Value;
  static const Value AUTOMATIC =
    LocalSearchMetaheuristic_Value_AUTOMATIC;
  static const Value GREEDY_DESCENT =
    LocalSearchMetaheuristic_Value_GREEDY_DESCENT;
  static const Value GUIDED_LOCAL_SEARCH =
    LocalSearchMetaheuristic_Value_GUIDED_LOCAL_SEARCH;
  static const Value SIMULATED_ANNEALING =
    LocalSearchMetaheuristic_Value_SIMULATED_ANNEALING;
  static const Value TABU_SEARCH =
    LocalSearchMetaheuristic_Value_TABU_SEARCH;
  static const Value OBJECTIVE_TABU_SEARCH =
    LocalSearchMetaheuristic_Value_OBJECTIVE_TABU_SEARCH;
  static inline bool Value_IsValid(int value) {
    return LocalSearchMetaheuristic_Value_IsValid(value);
  }
  static const Value Value_MIN =
    LocalSearchMetaheuristic_Value_Value_MIN;
  static const Value Value_MAX =
    LocalSearchMetaheuristic_Value_Value_MAX;
  static const int Value_ARRAYSIZE =
    LocalSearchMetaheuristic_Value_Value_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Value_descriptor() {
    return LocalSearchMetaheuristic_Value_descriptor();
  }
  static inline const ::std::string& Value_Name(Value value) {
    return LocalSearchMetaheuristic_Value_Name(value);
  }
  static inline bool Value_Parse(const ::std::string& name,
      Value* value) {
    return LocalSearchMetaheuristic_Value_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:operations_research.LocalSearchMetaheuristic)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();
  friend void protobuf_AssignDesc_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();
  friend void protobuf_ShutdownFile_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto();

  void InitAsDefaultInstance();
  static LocalSearchMetaheuristic* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FirstSolutionStrategy

// -------------------------------------------------------------------

// LocalSearchMetaheuristic

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace operations_research

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::operations_research::FirstSolutionStrategy_Value> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::operations_research::FirstSolutionStrategy_Value>() {
  return ::operations_research::FirstSolutionStrategy_Value_descriptor();
}
template <> struct is_proto_enum< ::operations_research::LocalSearchMetaheuristic_Value> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::operations_research::LocalSearchMetaheuristic_Value>() {
  return ::operations_research::LocalSearchMetaheuristic_Value_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ortools_2fconstraint_5fsolver_2frouting_5fenums_2eproto__INCLUDED
