#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <map>
#include <assert.h>

// DO NOT COPY THIS CODE FOR YOUR PSET
// IT IS INTENTIONALLY WRONG

std::map<void *, size_t> freed_allocations;
int allowed_mallocs = 3;

void *find_free_space(size_t sz) {
    for (auto &[ ptr, block_sz ] : freed_allocations) {
        if (block_sz >= sz) {
            freed_allocations.erase(ptr);
            return ptr;
        }
    }
    return nullptr;
}

void *m161_malloc(size_t sz) {
    void *ptr = find_free_space(sz);
    if (ptr) return ptr;
    if (allowed_mallocs--) return malloc(sz);
    return nullptr;
}

void m161_free(void *ptr) {
    if (ptr == nullptr) return;
    freed_allocations[ptr] = /* magic size */                                                                             64;
    // do stuff
}

int main() {
    // test that memory allocations can be reused
    for (int i = 0; i < 100; i++) {
        void *a = m161_malloc(64);
        assert(a);
        m161_free(a);
    }
    printf("TEST PASSED\n");
}
