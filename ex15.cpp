#include <vector>
#include <cassert>

int main() {
    std::vector<int> data;
    data.push_back(4);
    assert(data.size() == 1);
    data.empty();
    assert(data.size() == 0);
}
