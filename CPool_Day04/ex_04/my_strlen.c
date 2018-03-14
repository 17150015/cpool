#include <stdio.h>
int my_strlen ( char const * str )
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}
/*
int main(void)
{
    //task4
    char str[]="abcdef";
    printf("task4: \n");
    int l=my_strlen(str);
    printf("%d\n", l);
    

    return 0;
}
*/

