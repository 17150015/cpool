
#include <stdio.h>


int my_str_islower ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='a'&&*p<='z'))
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

    //task12
    char v[]="fawjl";
    int nn=my_str_islower(v);
    printf("%d\n", nn);
    

    return 0;
}
