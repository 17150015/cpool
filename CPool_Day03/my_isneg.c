#include <stdio.h>
int my_isneg(int n)
{
    if(n<0)
        printf("N ");
    else
        printf("P ");
    printf("\n");
    return 0;
}
int main(void)
{
    int x;
    scanf("%d", &x);
    my_isneg(x);
    return 0;
}

