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

void transform2(int x) {
   int a = x ^ 0x2039587;
   int b = -x;
   int c = x & 0xffff;
   bool res = mult_stuff(a, b, c);
   int negs = (a < 0) + (b < 0) + (c < 0);
   // printf("a=%d b=%d c=%d a*b*c=%d res=%d negs=%d\n", a, b, c, a * b * c, res, negs);
   if (res) assert(negs == 1 || negs == 3);
   else assert(negs == 0 || negs == 2);
}

int main() {
  transform2(0x2039587);
}
