#include <stdio.h>
int my_print_revalpha(void)
{
    char c='z';
    for(int i=0;i<26;i++)
    {
        printf("%c ", c-i);
    }
    printf("\n");
    return 0;
}
int main(void)
{
    my_print_revalpha();
    return 0;
}