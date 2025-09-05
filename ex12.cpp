#include <stdio.h>
#include <vector>

int main() {
  std::vector<int> nums;
  int x; scanf("%d", &x);
  int y = x;
  fprintf(stderr, "before insert\n");
  nums.push_back(y / x);
  fprintf(stderr, "inserted 1\n");
  x--;
  nums.push_back(y / x);
  fprintf(stderr, "inserted 2\n");
  x--;
  nums.push_back(y / x);
  fprintf(stderr, "inserted 3\n");
  x--;
  nums.push_back(y / x);
  fprintf(stderr, "inserted 4\n");
  x--;
  nums.push_back(y / x);
  fprintf(stderr, "inserted 5\n");
  for (int e : nums) {
    printf("wow we got %d\n", e);
  }
}

