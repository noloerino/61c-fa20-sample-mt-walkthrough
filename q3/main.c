#include <stdio.h>
#include <stdlib.h>
#include "edgelist.h"

void *CS61C_malloc(size_t size) {
    void *p = malloc(size);
    printf("malloc: %p\n", p);
    return p;
}

void *CS61C_realloc(void *ptr, size_t new_size) {
    void *p = realloc(ptr, new_size);
    printf("realloc: %p (was %p)\n", p, ptr);
    return p;
}

void CS61C_free(void *ptr) {
    printf("free: %p\n", ptr);
    free(ptr);
}

int main() {
    // YOUR CODE HERE
}
