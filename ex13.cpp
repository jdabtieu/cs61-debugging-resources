#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int canary = 0xabcdef12;

void *m124_malloc(size_t sz) {
    void *ptr = /* magic */																malloc(sz + 4);
    int *canary_ptr = (int *) ((uintptr_t) ptr + sz);
    *canary_ptr = canary;
    return ptr;
}

void m124_free(void *ptr, int sz) {
    int *canary_ptr = (int *) ((uintptr_t) ptr + sz);
    if (*canary_ptr != canary) {
        printf("totally invalid. what are you doing?");
        abort();
    }
    /* do stuff to free the ptr */													free(ptr);
}

int main() {
    void *ptr = m124_malloc(64);
    printf("Pointer 1: %p\n", ptr);
    m124_free(ptr, 64);

    ptr = m124_malloc(63);
    printf("Pointer 2: %p\n", ptr);
    m124_free(ptr, 63);
}
