#include <stdio.h>
#include <string.h>
void fun(char *s,int a)
{
    int i,temp;
    if(a>strlen(s))
    {
        printf("Invalid\n");
    }
    else
    {
        for(i=0;i<a;i++)
        {
            temp = s[i];
            s[i] = s[a-1];
            s[a-1] = temp;
            a=a-1;
        }
    printf("%s\n",s);
    }
}
int main() 
{
    char str[50];
    int k;
    printf("Enter the string :");
    scanf("%s",str);
    printf("Enter the value of k :");
    scanf("%d",&k);
    fun(str,k);
    return 0;
}
