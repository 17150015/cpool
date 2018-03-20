#include <stdio.h>

#include <string.h>
char *my_strcpy(char *dest , char const * src )
{
    char *p=dest;
    while(*src!='\0')
    {
        *dest=*src;
        src++;dest++;
    }
    *dest='\0';
    return p;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}


int main(int argc, const char * argv[]) {
    
    char dest[50], *str="Hello, World!\n";
    *dest = my_strcpy(dest, str);
    my_putchar(dest);
    
    
    return 0;
}
