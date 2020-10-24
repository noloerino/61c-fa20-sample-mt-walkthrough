#include <inttypes.h>
#include <stdlib.h>
#include "edgelist.h"

void *CS61C_malloc(size_t size);
void *CS61C_realloc(void *ptr, size_t size);
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
    L->edges = CS61C_malloc(sizeof(edge_t) * N * N);
    int len = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            uint32_t A = nodes[i];
            uint32_t B = nodes[j];
            uint32_t diff = B ^ A;
            // diff will contain a single 1 if hamming dist is 1
            if (A < B && ((diff & (diff - 1)) == 0)) {
                L->edges[len].A = A;
                L->edges[len].B = B;
                len++;
            }
        }
    }
    // YOUR CODE HERE
    L->len = len;
    L->edges = CS61C_realloc(L->edges, sizeof(edge_t) * len);
    return L;
}
