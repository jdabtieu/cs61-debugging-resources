#include <assert.h>
#include <inttypes.h>

unsigned char buffer[80];

int main() {
    void *heap_min = &buffer;
    // oooops...typo
    void *heap_max = (void *) ((uintptr_t) heap_min - 80);
    assert(heap_min <= heap_max);
}
