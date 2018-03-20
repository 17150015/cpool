
#include <stdio.h>

int my_str_isalpha ( char const * str )
{
    char *p=str;
    while(*p!='\0')
    {
        if(!(*p>='a'&&*p<='z')&&!(*p>='A'&&*p<='Z'))
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

    //task10
    char t[]="hey, how are you? 42WORds forty-two; fifty+one";
    int ll=my_str_isalpha(t);
    printf("%d\n", ll);

    return 0;
}
