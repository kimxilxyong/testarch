#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <limits.h>

int main(void) {

#if INTPTR_MAX == INT64_MAX
  printf("Pointer is 64bit\n");
#elif INTPTR_MAX == INT32_MAX
  printf("Pointer is 32bit\n");
#else
  printf("Unknown pointer size or missing size macros!\n");
#endif
  
#if __WORDSIZE == 64
  printf("Word is 64bit\n");
#elif __WORDSIZE == 32
  printf("Word is 32bit\n");
#else
  printf("Unknown word size or missing size macros!\n");
#endif

  if(sizeof (void *) * CHARBIT == 64) {
    printf("Void * is 64bit\n");
  } else {
    printf("Void * is NOT 64bit\n");
  }
  
#if UINTPTR_MAX == 0xffffffff
  printf("UINTPTR_MAX is 32bit\n");
#elif UINTPTR_MAX == 0xffffffffffffffff
  printf("UINTPTR_MAX is 64bit\n");
#else
  printf("UINTPTR_MAX is WTF!\n");
#endif
  
}
