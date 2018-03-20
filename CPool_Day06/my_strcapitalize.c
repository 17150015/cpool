
#include <stdio.h>

char *my_strcapitalize ( char * str )
{
    char *p=str;
    if(*p>='a'&&*p<='z') *p=*p-32;
    while(*++p!='\0')
    {
        if(*(p-1)==' '||*(p-1)=='.'||*(p-1)=='?'||*(p-1)=='!')
        {
            if(*p>='a'&&*p<='z') *p-=32;
        }
        else if(*p>='A'&&*p<='Z') *p+=32;
    }
    return str;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




int main(int argc, const char * argv[]) {

    
    //task9
    char s[]="hey, how are you? 42WORds forty-two; fifty+one";
    char *kk=my_strcapitalize(s);
    my_putchar(kk);
    printf("\n");
    
    
    return 0;
}
