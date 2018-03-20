
#include <stdio.h>

int my_str_isupper ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='A'&&*p<='Z'))
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
    //task13
    char w[]="faSFEl";
    int oo=my_str_isupper(w);
    printf("%d\n", oo);
    
    
    return 0;
}
