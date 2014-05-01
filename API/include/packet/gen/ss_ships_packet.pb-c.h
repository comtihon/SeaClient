/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ss_ships_packet.proto */

#ifndef PROTOBUF_C_ss_5fships_5fpacket_2eproto__INCLUDED
#define PROTOBUF_C_ss_5fships_5fpacket_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _ShipsPacket ShipsPacket;
typedef struct _Ship Ship;


/* --- enums --- */


/* --- messages --- */

struct  _ShipsPacket
{
  ProtobufCMessage base;
  size_t n_ship;
  Ship **ship;
};
#define SHIPS_PACKET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ships_packet__descriptor) \
    , 0,NULL }


struct  _Ship
{
  ProtobufCMessage base;
  int32_t id;
  int32_t experience;
  int32_t type;
  int32_t level;
  int64_t repair_date;
  char *name;
};
#define SHIP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ship__descriptor) \
    , 0, 0, 0, 0, 0, NULL }


/* ShipsPacket methods */
void   ships_packet__init
                     (ShipsPacket         *message);
size_t ships_packet__get_packed_size
                     (const ShipsPacket   *message);
size_t ships_packet__pack
                     (const ShipsPacket   *message,
                      uint8_t             *out);
size_t ships_packet__pack_to_buffer
                     (const ShipsPacket   *message,
                      ProtobufCBuffer     *buffer);
ShipsPacket *
       ships_packet__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ships_packet__free_unpacked
                     (ShipsPacket *message,
                      ProtobufCAllocator *allocator);
/* Ship methods */
void   ship__init
                     (Ship         *message);
size_t ship__get_packed_size
                     (const Ship   *message);
size_t ship__pack
                     (const Ship   *message,
                      uint8_t             *out);
size_t ship__pack_to_buffer
                     (const Ship   *message,
                      ProtobufCBuffer     *buffer);
Ship *
       ship__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ship__free_unpacked
                     (Ship *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ShipsPacket_Closure)
                 (const ShipsPacket *message,
                  void *closure_data);
typedef void (*Ship_Closure)
                 (const Ship *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ships_packet__descriptor;
extern const ProtobufCMessageDescriptor ship__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ss_5fships_5fpacket_2eproto__INCLUDED */