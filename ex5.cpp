#include <stdio.h>

#define INT_MAX 2147483647

int main() {
  for (int i = INT_MAX - 5; i <= INT_MAX; i++) {
    printf("%d\n", i);
  }
}
