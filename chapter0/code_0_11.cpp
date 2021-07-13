// code 0-11 연결리스트로 큐 작성하기
#include <stdio.h>

struct _node {
    int key;
    struct _node *next;
};

typedef struct _node node_t;

