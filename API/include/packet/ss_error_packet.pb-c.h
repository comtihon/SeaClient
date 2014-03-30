/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ss_error_packet.proto */

#ifndef PROTOBUF_C_ss_5ferror_5fpacket_2eproto__INCLUDED
#define PROTOBUF_C_ss_5ferror_5fpacket_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _ErrorPacket ErrorPacket;


/* --- enums --- */


/* --- messages --- */

struct  _ErrorPacket
{
  ProtobufCMessage base;
  int32_t code;
  char *descr;
};
#define ERROR_PACKET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&error_packet__descriptor) \
    , 0, NULL }


/* ErrorPacket methods */
void   error_packet__init
                     (ErrorPacket         *message);
size_t error_packet__get_packed_size
                     (const ErrorPacket   *message);
size_t error_packet__pack
                     (const ErrorPacket   *message,
                      uint8_t             *out);
size_t error_packet__pack_to_buffer
                     (const ErrorPacket   *message,
                      ProtobufCBuffer     *buffer);
ErrorPacket *
       error_packet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   error_packet__free_unpacked
                     (ErrorPacket *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ErrorPacket_Closure)
                 (const ErrorPacket *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor error_packet__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ss_5ferror_5fpacket_2eproto__INCLUDED */
