#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 20; i++) {
    vec.push_back(i);
  }
  vec.erase();
}
