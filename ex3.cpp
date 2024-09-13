#include <stdio.h>

int main() {
  long long *ptr;
  printf("Where do you want to inspect memory? ptr is at %p\n", &ptr);
  scanf("%llx", &ptr);
  printf("Ok, memory at %p: ", ptr);
  fflush(stdout);
  printf("%p\n", *ptr);
}
