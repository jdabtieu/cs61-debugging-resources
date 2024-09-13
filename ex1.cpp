#include <cstdio>
#include <vector>

int main() {
  int x;
  scanf("%d", x);
  std::vector<int> vec;
  vec.push_back(x);
  printf("%d\n", vec.length());
}
