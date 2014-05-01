/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ss_auth_packet.proto */

#ifndef PROTOBUF_C_ss_5fauth_5fpacket_2eproto__INCLUDED
#define PROTOBUF_C_ss_5fauth_5fpacket_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _AuthPacket AuthPacket;
typedef struct _RegisterPacket RegisterPacket;


/* --- enums --- */


/* --- messages --- */

struct  _AuthPacket
{
  ProtobufCMessage base;
  char *uid;
  char *password;
};
#define AUTH_PACKET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&auth_packet__descriptor) \
    , NULL, NULL }


struct  _RegisterPacket
{
  ProtobufCMessage base;
  char *login;
  char *password;
  char *uid;
  char *name;
  char *icon_url;
  char *motto;
};
#define REGISTER_PACKET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&register_packet__descriptor) \
    , NULL, NULL, NULL, NULL, NULL, NULL }


/* AuthPacket methods */
void   auth_packet__init
                     (AuthPacket         *message);
size_t auth_packet__get_packed_size
                     (const AuthPacket   *message);
size_t auth_packet__pack
                     (const AuthPacket   *message,
                      uint8_t             *out);
size_t auth_packet__pack_to_buffer
                     (const AuthPacket   *message,
                      ProtobufCBuffer     *buffer);
AuthPacket *
       auth_packet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   auth_packet__free_unpacked
                     (AuthPacket *message,
                      ProtobufCAllocator *allocator);
/* RegisterPacket methods */
void   register_packet__init
                     (RegisterPacket         *message);
size_t register_packet__get_packed_size
                     (const RegisterPacket   *message);
size_t register_packet__pack
                     (const RegisterPacket   *message,
                      uint8_t             *out);
size_t register_packet__pack_to_buffer
                     (const RegisterPacket   *message,
                      ProtobufCBuffer     *buffer);
RegisterPacket *
       register_packet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   register_packet__free_unpacked
                     (RegisterPacket *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AuthPacket_Closure)
                 (const AuthPacket *message,
                  void *closure_data);
typedef void (*RegisterPacket_Closure)
                 (const RegisterPacket *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor auth_packet__descriptor;
extern const ProtobufCMessageDescriptor register_packet__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ss_5fauth_5fpacket_2eproto__INCLUDED */
