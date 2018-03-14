#include "stdio.h"

void my_swap(int *a, int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}


int main(void)
{
    //task1
    int a=2,b=3;
    printf("task1: \n");
    my_swap(&a, &b);
    printf("%d, %d\n", a, b);
    
    return 0;
}

