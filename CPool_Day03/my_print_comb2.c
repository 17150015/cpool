

#include <stdio.h>

int my_print_comb2(void)
{
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int k=i;k>=i&&k<=9;k++)
            {
                for(int l=j+1;l>j&&l<=9;l++)
                {
                    printf("%d%d %d%d",i, j, k, l);
                    if(i!=9||j!=8||k!=9||l!=9)
                        printf(", ");
                }
            }
        }
    }
    printf("\n");
    return 0;
}
int main(void)
{
    my_print_comb2();
    return 0;
}