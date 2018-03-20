#include <stdio.h>
#include <string.h>

char *my_revstr( char * str )
{
    char *dest=str;
    char* p = str + strlen(str)-1;
    char temp;
    while(str<p)
    {
        temp=*p;
        *p--=*str;
        *str++=temp;
    }
    str=dest;
    return str;
}

void my_putchar(char *s);




int main(int argc, const char * argv[]) {
    

    char gg[]="Hello, World!\n";
    char *ff;
    ff = my_revstr(gg);
    my_putchar(ff);
    printf("\n");

    return 0;
}
