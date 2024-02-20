#include <stdint.h>

typedef struct{
    void* ptr;
    uint64_t len; 
    uint64_t capacity;
} Array;