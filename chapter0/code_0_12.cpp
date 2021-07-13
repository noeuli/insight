// code 0-11 연결리스트로 큐 작성하기
#include <stdio.h>
#include <stdlib.h>

#define NULL    0

struct _node {
    int key;
    struct _node *next;
};

typedef struct _node node_t;

node_t *head = NULL, *tail = NULL;

void insert_node(int n)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));

    new_node->key = n;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

int delete_node()
{
    node_t *node;
    int r;

    if (head == NULL)
        return -1;

    node = head;
    head = head->next;
    if (head == NULL)
        tail = NULL;
    
    r = node->key;
    free(node);

    return r;
}
