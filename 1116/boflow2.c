#include <stdio.h>
#include <string.h>

int main() {
  unsigned int a = 1, b[1];
  printf("a = %u\n", a);

  for (int i = 0; i<=1; i++) b[i] = 100;
  printf("a = %u\n", a);

  return 0;
}
