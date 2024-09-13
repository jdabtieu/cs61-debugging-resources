#include <stdio.h>

int main() {
  int x; scanf("%d", &x);
  int y = x;
  printf("%d\n", y / x);
  x--;
  printf("%d\n", y / x);
  x--;
  printf("%d\n", y / x);
  x--;
  printf("%d\n", y / x);
  x--;
  printf("%d\n", y / x);
}
