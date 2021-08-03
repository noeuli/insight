#include <stdio.h>
#include "node.h"

// 연결 리스트를 역순으로 출력하기

void print_list_r(node_t* from)
{
    if (from == NULL)
        return;
    print_list_r(from->next);
    printf("%d ", from->key);
}
