#include <stdio.h>
#include <vector>

int main() {
  std::vector<int> nums;
  int x; scanf("%d", &x);
  int y = x;
  nums.push_back(y / x);
  x--;
  nums.push_back(y / x);
  x--;
  nums.push_back(y / x);
  x--;
  nums.push_back(y / x);
  x--;
  nums.push_back(y / x);
  for (int e : nums) {
    printf("wow we got %d\n", e);
  }
}

