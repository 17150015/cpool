
#include <stdio.h>
int my_print_digits ( void )
{
    for(int i=0;i<10;i++)
        printf("%d ", i);
    printf("\n");
    return 0;
}
int main(void)
{
    my_print_digits();
    return 0;
}