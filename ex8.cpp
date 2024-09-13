#include <stdio.h>
#include <assert.h>

bool mult_stuff(int a, int b, int c) {
  int res = a * b * c;
  if (res < 0) {
    printf("One or three of the variables were negative!\n");
    return true;
  } else {
    printf("Zero or two of the variables were negative!\n");
    return false;
  }
}

void transform(int x) {
   int a = (x << 13) ^ 0x2039587;
   int b = x | 0xdead;
   int c = 1 - x;
   bool res = mult_stuff(a, b, c);
   int negs = (a < 0) + (b < 0) + (c < 0);
   if (res) assert(negs == 1 || negs == 3);
   else assert(negs == 0 || negs == 2);
}

int main() {
  transform(0);
  transform(1);
  transform(2);
}
