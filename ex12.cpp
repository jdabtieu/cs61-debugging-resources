#include <stdio.h>

int main() {
  int x; scanf("%d", &x);
  int y = x;
  printf("A\n");
  printf("%d\n", y / x);
  x--;
  printf("B\n");
  printf("%d\n", y / x);
  x--;
  printf("C\n");
  printf("%d\n", y / x);
  x--;
  printf("D\n");
  printf("%d\n", y / x);
  x--;
  printf("E\n");
  printf("%d\n", y / x);
}
