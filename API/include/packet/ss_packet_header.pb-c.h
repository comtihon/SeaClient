/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ss_packet_header.proto */

#ifndef PROTOBUF_C_ss_5fpacket_5fheader_2eproto__INCLUDED
#define PROTOBUF_C_ss_5fpacket_5fheader_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Header Header;


/* --- enums --- */


/* --- messages --- */

struct  _Header
{
  ProtobufCMessage base;
  int32_t type;
  int32_t protocol;
  int32_t apiversion;
  ProtobufCBinaryData packet;
};
#define HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&header__descriptor) \
    , 0, 0, 0, {0,NULL} }


/* Header methods */
void   header__init
                     (Header         *message);
size_t header__get_packed_size
                     (const Header   *message);
size_t header__pack
                     (const Header   *message,
                      uint8_t             *out);
size_t header__pack_to_buffer
                     (const Header   *message,
                      ProtobufCBuffer     *buffer);
Header *
       header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   header__free_unpacked
                     (Header *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Header_Closure)
                 (const Header *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor header__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ss_5fpacket_5fheader_2eproto__INCLUDED */
