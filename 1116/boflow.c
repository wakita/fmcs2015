#include <stdio.h>
#include <string.h>

int main() {
  unsigned int a = 1, b;
  printf("a = %u\n", a);

  *(&b+1) = 12345;
  printf("a = %u\n", a);

  return 0;
}
