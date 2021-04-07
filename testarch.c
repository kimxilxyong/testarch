#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void) {

#if INTPTR_MAX == INT64_MAX
  printf("Pointer is 64bit\n");
#elif INTPTR_MAX == INT32_MAX
  printf("Pointer is 32bit\n");
#else
  printf("Unknown pointer size or missing size macros!\n");
#endif

}
