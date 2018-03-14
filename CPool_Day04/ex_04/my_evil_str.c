#include <stdio.h>
int my_strlen ( char const * str );
char *my_evil_str(char *str)
{
    int right=my_strlen(str)-1;
    int left=0;
    while(left<right)
    {
        char tmp=str[left];
        str[left]=str[right];
        str[right]=tmp;
        left++;
        right--;
    }
    return str;
}

int main(void)
{
    char str[]="abcdef";
    printf("task3:  \n");
    my_evil_str(str);
    printf("%s\n", str);

    return 0;
}

