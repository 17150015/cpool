

#include <stdio.h>

char* my_strstr(char* str,char const * to_find)
{
    for(int i=0;str[i]!='\0';i++)
    {
        int j=0;
        int temp=i;
        if(str[i]==to_find[j])
        {
            while(str[i++]==to_find[j++])
            {
                if((to_find[j]=='\0'))
                    return &str[i-j];
            }
            i=temp;
        }
    }
    return NULL;
}

void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




int main(int argc, const char * argv[]) {
    
    //task4
    char* string="12345554555123";
    char *strCharSet="554";
    char *dd;
    dd=my_strstr(string, strCharSet);
    my_putchar(dd);
    printf("\n");
    
    
    return 0;
}
