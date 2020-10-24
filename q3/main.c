#include <stdio.h>
#include <stdlib.h>
#include "edgelist.h"

void test(char *test_name, uint32_t *arr, int N);

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
    /*
    uint32_t arr1[] = {0b0000, 0b0001, 0b0010, 0b0011, 0b0100, 0b1010};
    test("test 1", arr1, 6);
    uint32_t arr2[] = {0b0001, 0b0000};
    test("test 2", arr2, 2);
    */

    uint32_t n = 1;
    printf("%hhu\n", n);
}

void test(char *test_name, uint32_t *arr, int N) {
    printf("=== testing %s ===\n", test_name);
    edgelist_t *lst = build_edgelist(arr, N);
    for (int i = 0; i < lst->len; i++) {
        printf("edge: %u -> %u\n", lst->edges[i].A, lst->edges[i].B);
    }
    CS61C_free(lst->edges);
    CS61C_free(lst);
}
