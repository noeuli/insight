#include <stdio.h>
#include "node.h"

// code 1-3 재귀 호출을 이용하여 리스트 출력하기

void print_list2(node_t* from)
{
    if (from == NULL)
        return;
    
    printf("%d ", from->key);
    print_list2(from->next);    
}
