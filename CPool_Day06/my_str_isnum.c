

#include <stdio.h>
int my_str_isnum ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='0'&&*p<='9'))
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

    //task11
    char u[]="23251235";
    int mm=my_str_isnum(u);
    printf("%d\n", mm);
    
    
    return 0;
}
