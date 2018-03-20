

#include <stdio.h>
#include <unistd.h>
#include <string.h>
int my_strncmp(char const *str1, char const *str2, int count)
{
    if(!count)
        return 0;
    while(count-- && *str1 && (*str1 ++ == *str2 ++))
        ;
    return *str1-*str2;
}


void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




int main(int argc, const char * argv[]) {
    
    //task6
    char a[10]="abc";
    char b[10]="abc";
    int hh=my_strncmp(a, b, 4);
    printf("%d\n", hh);
    
    return 0;
}
