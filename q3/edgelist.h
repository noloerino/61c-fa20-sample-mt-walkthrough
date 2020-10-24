#include <inttypes.h>

typedef struct {
    uint32_t A;
    uint32_t B;
} edge_t;

typedef struct {
    edge_t *edges;
    int len;
} edgelist_t;

edgelist_t *build_edgelist(uint32_t *nodes, int N);
