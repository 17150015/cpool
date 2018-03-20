#include <stdio.h>

char *my_strncpy(char *dest , char const *src , int n)
{
    char *p=dest;
    while(*src!='\0'&&n--)
    {
        *dest=*src;
        src++;dest++;
    }
    if(n>0)
        *dest='\0';
    dest=p;
    return *p;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}


int main(int argc, const char * argv[]) {
    
    //task2
    char dest[50], *str="Hello, World!\n";
    *dest = my_strncpy(dest, str, 15);
    my_putchar(dest);
    

    return 0;
}
