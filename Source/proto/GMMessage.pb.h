// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GMMessage.proto

#ifndef PROTOBUF_GMMessage_2eproto__INCLUDED
#define PROTOBUF_GMMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "MessageId.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_GMMessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsReqGMCloseServerImpl();
void InitDefaultsReqGMCloseServer();
void InitDefaultsResGMCloseServerImpl();
void InitDefaultsResGMCloseServer();
inline void InitDefaults() {
  InitDefaultsReqGMCloseServer();
  InitDefaultsResGMCloseServer();
}
}  // namespace protobuf_GMMessage_2eproto
class ReqGMCloseServer;
class ReqGMCloseServerDefaultTypeInternal;
extern ReqGMCloseServerDefaultTypeInternal _ReqGMCloseServer_default_instance_;
class ResGMCloseServer;
class ResGMCloseServerDefaultTypeInternal;
extern ResGMCloseServerDefaultTypeInternal _ResGMCloseServer_default_instance_;

// ===================================================================

class ReqGMCloseServer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ReqGMCloseServer) */ {
 public:
  ReqGMCloseServer();
  virtual ~ReqGMCloseServer();

  ReqGMCloseServer(const ReqGMCloseServer& from);

  inline ReqGMCloseServer& operator=(const ReqGMCloseServer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ReqGMCloseServer(ReqGMCloseServer&& from) noexcept
    : ReqGMCloseServer() {
    *this = ::std::move(from);
  }

  inline ReqGMCloseServer& operator=(ReqGMCloseServer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ReqGMCloseServer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReqGMCloseServer* internal_default_instance() {
    return reinterpret_cast<const ReqGMCloseServer*>(
               &_ReqGMCloseServer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ReqGMCloseServer* other);
  friend void swap(ReqGMCloseServer& a, ReqGMCloseServer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ReqGMCloseServer* New() const PROTOBUF_FINAL { return New(NULL); }

  ReqGMCloseServer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReqGMCloseServer& from);
  void MergeFrom(const ReqGMCloseServer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ReqGMCloseServer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string resMsg = 2;
  void clear_resmsg();
  static const int kResMsgFieldNumber = 2;
  const ::std::string& resmsg() const;
  void set_resmsg(const ::std::string& value);
  #if LANG_CXX11
  void set_resmsg(::std::string&& value);
  #endif
  void set_resmsg(const char* value);
  void set_resmsg(const char* value, size_t size);
  ::std::string* mutable_resmsg();
  ::std::string* release_resmsg();
  void set_allocated_resmsg(::std::string* resmsg);

  // .MsgId msgId = 1;
  void clear_msgid();
  static const int kMsgIdFieldNumber = 1;
  ::MsgId msgid() const;
  void set_msgid(::MsgId value);

  // @@protoc_insertion_point(class_scope:ReqGMCloseServer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr resmsg_;
  int msgid_;
  mutable int _cached_size_;
  friend struct ::protobuf_GMMessage_2eproto::TableStruct;
  friend void ::protobuf_GMMessage_2eproto::InitDefaultsReqGMCloseServerImpl();
};
// -------------------------------------------------------------------

class ResGMCloseServer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ResGMCloseServer) */ {
 public:
  ResGMCloseServer();
  virtual ~ResGMCloseServer();

  ResGMCloseServer(const ResGMCloseServer& from);

  inline ResGMCloseServer& operator=(const ResGMCloseServer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ResGMCloseServer(ResGMCloseServer&& from) noexcept
    : ResGMCloseServer() {
    *this = ::std::move(from);
  }

  inline ResGMCloseServer& operator=(ResGMCloseServer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ResGMCloseServer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResGMCloseServer* internal_default_instance() {
    return reinterpret_cast<const ResGMCloseServer*>(
               &_ResGMCloseServer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ResGMCloseServer* other);
  friend void swap(ResGMCloseServer& a, ResGMCloseServer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ResGMCloseServer* New() const PROTOBUF_FINAL { return New(NULL); }

  ResGMCloseServer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResGMCloseServer& from);
  void MergeFrom(const ResGMCloseServer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ResGMCloseServer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string resMsg = 2;
  void clear_resmsg();
  static const int kResMsgFieldNumber = 2;
  const ::std::string& resmsg() const;
  void set_resmsg(const ::std::string& value);
  #if LANG_CXX11
  void set_resmsg(::std::string&& value);
  #endif
  void set_resmsg(const char* value);
  void set_resmsg(const char* value, size_t size);
  ::std::string* mutable_resmsg();
  ::std::string* release_resmsg();
  void set_allocated_resmsg(::std::string* resmsg);

  // .MsgId msgId = 1;
  void clear_msgid();
  static const int kMsgIdFieldNumber = 1;
  ::MsgId msgid() const;
  void set_msgid(::MsgId value);

  // @@protoc_insertion_point(class_scope:ResGMCloseServer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr resmsg_;
  int msgid_;
  mutable int _cached_size_;
  friend struct ::protobuf_GMMessage_2eproto::TableStruct;
  friend void ::protobuf_GMMessage_2eproto::InitDefaultsResGMCloseServerImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ReqGMCloseServer

// .MsgId msgId = 1;
inline void ReqGMCloseServer::clear_msgid() {
  msgid_ = 0;
}
inline ::MsgId ReqGMCloseServer::msgid() const {
  // @@protoc_insertion_point(field_get:ReqGMCloseServer.msgId)
  return static_cast< ::MsgId >(msgid_);
}
inline void ReqGMCloseServer::set_msgid(::MsgId value) {
  
  msgid_ = value;
  // @@protoc_insertion_point(field_set:ReqGMCloseServer.msgId)
}

// string resMsg = 2;
inline void ReqGMCloseServer::clear_resmsg() {
  resmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ReqGMCloseServer::resmsg() const {
  // @@protoc_insertion_point(field_get:ReqGMCloseServer.resMsg)
  return resmsg_.GetNoArena();
}
inline void ReqGMCloseServer::set_resmsg(const ::std::string& value) {
  
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ReqGMCloseServer.resMsg)
}
#if LANG_CXX11
inline void ReqGMCloseServer::set_resmsg(::std::string&& value) {
  
  resmsg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ReqGMCloseServer.resMsg)
}
#endif
inline void ReqGMCloseServer::set_resmsg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ReqGMCloseServer.resMsg)
}
inline void ReqGMCloseServer::set_resmsg(const char* value, size_t size) {
  
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ReqGMCloseServer.resMsg)
}
inline ::std::string* ReqGMCloseServer::mutable_resmsg() {
  
  // @@protoc_insertion_point(field_mutable:ReqGMCloseServer.resMsg)
  return resmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ReqGMCloseServer::release_resmsg() {
  // @@protoc_insertion_point(field_release:ReqGMCloseServer.resMsg)
  
  return resmsg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ReqGMCloseServer::set_allocated_resmsg(::std::string* resmsg) {
  if (resmsg != NULL) {
    
  } else {
    
  }
  resmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resmsg);
  // @@protoc_insertion_point(field_set_allocated:ReqGMCloseServer.resMsg)
}

// -------------------------------------------------------------------

// ResGMCloseServer

// .MsgId msgId = 1;
inline void ResGMCloseServer::clear_msgid() {
  msgid_ = 0;
}
inline ::MsgId ResGMCloseServer::msgid() const {
  // @@protoc_insertion_point(field_get:ResGMCloseServer.msgId)
  return static_cast< ::MsgId >(msgid_);
}
inline void ResGMCloseServer::set_msgid(::MsgId value) {
  
  msgid_ = value;
  // @@protoc_insertion_point(field_set:ResGMCloseServer.msgId)
}

// string resMsg = 2;
inline void ResGMCloseServer::clear_resmsg() {
  resmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResGMCloseServer::resmsg() const {
  // @@protoc_insertion_point(field_get:ResGMCloseServer.resMsg)
  return resmsg_.GetNoArena();
}
inline void ResGMCloseServer::set_resmsg(const ::std::string& value) {
  
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ResGMCloseServer.resMsg)
}
#if LANG_CXX11
inline void ResGMCloseServer::set_resmsg(::std::string&& value) {
  
  resmsg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ResGMCloseServer.resMsg)
}
#endif
inline void ResGMCloseServer::set_resmsg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ResGMCloseServer.resMsg)
}
inline void ResGMCloseServer::set_resmsg(const char* value, size_t size) {
  
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ResGMCloseServer.resMsg)
}
inline ::std::string* ResGMCloseServer::mutable_resmsg() {
  
  // @@protoc_insertion_point(field_mutable:ResGMCloseServer.resMsg)
  return resmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResGMCloseServer::release_resmsg() {
  // @@protoc_insertion_point(field_release:ResGMCloseServer.resMsg)
  
  return resmsg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResGMCloseServer::set_allocated_resmsg(::std::string* resmsg) {
  if (resmsg != NULL) {
    
  } else {
    
  }
  resmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resmsg);
  // @@protoc_insertion_point(field_set_allocated:ResGMCloseServer.resMsg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GMMessage_2eproto__INCLUDED