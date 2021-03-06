// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: coprocess_return_overrides.proto

#ifndef PROTOBUF_coprocess_5freturn_5foverrides_2eproto__INCLUDED
#define PROTOBUF_coprocess_5freturn_5foverrides_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace coprocess {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_coprocess_5freturn_5foverrides_2eproto();
void protobuf_InitDefaults_coprocess_5freturn_5foverrides_2eproto();
void protobuf_AssignDesc_coprocess_5freturn_5foverrides_2eproto();
void protobuf_ShutdownFile_coprocess_5freturn_5foverrides_2eproto();

class ReturnOverrides;

// ===================================================================

class ReturnOverrides : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:coprocess.ReturnOverrides) */ {
 public:
  ReturnOverrides();
  virtual ~ReturnOverrides();

  ReturnOverrides(const ReturnOverrides& from);

  inline ReturnOverrides& operator=(const ReturnOverrides& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ReturnOverrides& default_instance();

  static const ReturnOverrides* internal_default_instance();

  void Swap(ReturnOverrides* other);

  // implements Message ----------------------------------------------

  inline ReturnOverrides* New() const { return New(NULL); }

  ReturnOverrides* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ReturnOverrides& from);
  void MergeFrom(const ReturnOverrides& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
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
  void InternalSwap(ReturnOverrides* other);
  void UnsafeMergeFrom(const ReturnOverrides& from);
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

  // accessors -------------------------------------------------------

  // optional int32 response_code = 1;
  void clear_response_code();
  static const int kResponseCodeFieldNumber = 1;
  ::google::protobuf::int32 response_code() const;
  void set_response_code(::google::protobuf::int32 value);

  // optional string response_error = 2;
  void clear_response_error();
  static const int kResponseErrorFieldNumber = 2;
  const ::std::string& response_error() const;
  void set_response_error(const ::std::string& value);
  void set_response_error(const char* value);
  void set_response_error(const char* value, size_t size);
  ::std::string* mutable_response_error();
  ::std::string* release_response_error();
  void set_allocated_response_error(::std::string* response_error);

  // @@protoc_insertion_point(class_scope:coprocess.ReturnOverrides)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr response_error_;
  ::google::protobuf::int32 response_code_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_coprocess_5freturn_5foverrides_2eproto_impl();
  friend void  protobuf_AddDesc_coprocess_5freturn_5foverrides_2eproto_impl();
  friend void protobuf_AssignDesc_coprocess_5freturn_5foverrides_2eproto();
  friend void protobuf_ShutdownFile_coprocess_5freturn_5foverrides_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ReturnOverrides> ReturnOverrides_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ReturnOverrides

// optional int32 response_code = 1;
inline void ReturnOverrides::clear_response_code() {
  response_code_ = 0;
}
inline ::google::protobuf::int32 ReturnOverrides::response_code() const {
  // @@protoc_insertion_point(field_get:coprocess.ReturnOverrides.response_code)
  return response_code_;
}
inline void ReturnOverrides::set_response_code(::google::protobuf::int32 value) {
  
  response_code_ = value;
  // @@protoc_insertion_point(field_set:coprocess.ReturnOverrides.response_code)
}

// optional string response_error = 2;
inline void ReturnOverrides::clear_response_error() {
  response_error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReturnOverrides::response_error() const {
  // @@protoc_insertion_point(field_get:coprocess.ReturnOverrides.response_error)
  return response_error_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReturnOverrides::set_response_error(const ::std::string& value) {
  
  response_error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:coprocess.ReturnOverrides.response_error)
}
inline void ReturnOverrides::set_response_error(const char* value) {
  
  response_error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:coprocess.ReturnOverrides.response_error)
}
inline void ReturnOverrides::set_response_error(const char* value, size_t size) {
  
  response_error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:coprocess.ReturnOverrides.response_error)
}
inline ::std::string* ReturnOverrides::mutable_response_error() {
  
  // @@protoc_insertion_point(field_mutable:coprocess.ReturnOverrides.response_error)
  return response_error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReturnOverrides::release_response_error() {
  // @@protoc_insertion_point(field_release:coprocess.ReturnOverrides.response_error)
  
  return response_error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReturnOverrides::set_allocated_response_error(::std::string* response_error) {
  if (response_error != NULL) {
    
  } else {
    
  }
  response_error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), response_error);
  // @@protoc_insertion_point(field_set_allocated:coprocess.ReturnOverrides.response_error)
}

inline const ReturnOverrides* ReturnOverrides::internal_default_instance() {
  return &ReturnOverrides_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace coprocess

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_coprocess_5freturn_5foverrides_2eproto__INCLUDED
