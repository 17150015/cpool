
#include <stdio.h>
char *my_strupcase ( char * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(*p>='a'&&*p<='z')
            *p-=32;
        p++;
    }
    return str;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




int main(int argc, const char * argv[]) {
    
    //task7
    char p[]="adAnfsdfDE";
    char *ii=my_strupcase(p);
    my_putchar(ii);
    printf("\n");
    
   

    return 0;
}
