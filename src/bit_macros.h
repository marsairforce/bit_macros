/**
 * Utilities for manipulating bits
 */

#ifndef _bit_macros_
#define _bit_macros_

#include <inttypes.h>

static inline void set_bit(unsigned int *x, unsigned int mask) {
  *x |= mask;
}

static inline void set_bit(uint8_t *x, uint8_t mask) {
  *x |= mask;
}

static inline void clear_bit(unsigned int *x, unsigned int mask) {
  *x &= ~mask;
}

static inline void clear_bit(uint8_t *x, uint8_t mask) {
  *x &= ~mask;
}

static inline void toggle_bit(unsigned int *x, unsigned int mask) {
  *x ^= mask;
}

static inline void toggle_bit(uint8_t *x, uint8_t mask) {
  *x ^= mask;
}

static inline int test_bit(unsigned int *x, unsigned int mask) {
  return (*x & mask);
}

static inline int test_bit(uint8_t *x, uint8_t mask) {
  return (*x & mask);
}
#endif
