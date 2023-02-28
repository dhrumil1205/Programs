#include <stdio.h>
#include <string.h>
void fun(char *s)
{
    int count=0;
    while(*s!='\0')
    {
    if((*s>='a' && *s<='z') || (*s>='0'&& *s<='9'))
    {
        printf("false\n");
        break;
    }
    else if(*s>='A' && *s<='Z')
    {
        count++;
        if(count==strlen(s))
        {
            printf("true\n");
        }
        *s++;
    }
    else
    {
        printf("false\n");
        break;
    }
    }
    
}


int main() 
{
    char str[50];
    printf("Enter the string :");
    scanf("%s",str);
    printf("%s\n",str);
    fun(str);
    return 0;
}
