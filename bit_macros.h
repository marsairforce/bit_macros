/**
 * Utilities for manipulating bits
 */

#ifndef _bit_macros_
#define _bit_macros_


static inline void set_bit(unsigned int *x, unsigned int mask) {
  *x |= mask;
}

static inline void clear_bit(unsigned int *x, unsigned int mask) {
  *x &= ~mask;
}

static inline void toggle_bit(unsigned int *x, unsigned int mask) {
  *x ^= mask;
}

static inline int test_bit(unsigned int *x, unsigned int mask) {
  return (*x & mask);
}

#endif
