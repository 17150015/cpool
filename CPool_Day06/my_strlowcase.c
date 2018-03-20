
#include <stdio.h>
char *my_strlowcase ( char * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(*p>='A'&&*p<='Z')
            *p+=32;
        p++;
    }
    return str;
}


void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




int main(int argc, const char * argv[]) {
    
    //task8
    char q[]="adAnDFEsdfDE";
    char *jj=my_strlowcase(q);
    my_putchar(jj);
    printf("\n");
    
    
    return 0;
}
