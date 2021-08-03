// code 1-3
#include <stdio.h>
#include "node.h"

void print_list(node_t* from)
{
    node_t *node;

    node = from;
    while (node != NULL) {
        printf("%d ", node->key);
        node = node->next;
    }
}
