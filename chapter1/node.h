#ifndef __NODE_H__
#define __NODE_H__

struct _node {
    int key;
    struct _node *next;
};

typedef struct _node node_t;

#endif
