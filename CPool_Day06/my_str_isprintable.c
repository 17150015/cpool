
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int my_str_isprintable ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!isprint(*p))
            return 0;
        p++;
    }
    return 1;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




int main(int argc, const char * argv[]) {
    
    //task14
    char x[]="faSFEl";
    int pp=my_str_isprintable(x);
    printf("%d\n", pp);
    
    return 0;
}

