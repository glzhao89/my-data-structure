#include <stdint.h>

typedef struct Array {
  uint32_t size;
  uint32_t cap;
  char*    data;
} Array;
