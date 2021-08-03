#ifndef BITBOY_H
#define BITBOY_H

#include <cstdint>

using byte = uint8_t;
using signed_byte = int8_t;

#define SET_BIT(val, n) (val) |= 1 << (n)
#define GET_BIT(val, n) ((val) & (1 << (n))) >> (n)

#endif