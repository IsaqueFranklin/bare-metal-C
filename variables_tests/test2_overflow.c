#include <stdio.h>

int main(void) {
  unsigned char j = 255;
  j = j + 10;
  printf("%u\n", j); // The return will be 9.
}
