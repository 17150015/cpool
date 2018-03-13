#include <stdio.h>
int my_print_comb(void)
{
    for(int i=0;i<=9;i++)
        for(int j=i+1;j<=9;j++)
            for(int k=j+1;k<=9;k++)
                printf("%d%d%d ", i,j,k);
    printf("\n");
    return 0;
}
int main(void)
{
    my_print_comb();
    return 0;
}