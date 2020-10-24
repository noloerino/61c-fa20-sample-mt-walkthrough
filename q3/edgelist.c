#include <inttypes.h>
#include <stdlib.h>
#include "edgelist.h"

void *CS61C_malloc(size_t size);
void CS61C_free(void *ptr);

// Struct definitions from header file, copied here for convenience
//
// typedef struct {
//     uint32_t A;
//     uint32_t B;
// } edge_t;
//
// typedef struct {
//     edge_t *edges;
//     int len;
// } edgelist_t;
//
edgelist_t *build_edgelist(uint32_t *nodes, int N) {
    edgelist_t *L = CS61C_malloc(sizeof(edgelist_t));
    // YOUR CODE HERE
    return L;
}
