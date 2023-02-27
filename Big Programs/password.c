#include<stdio.h>
void fun(char *pass)
{
    char *p=pass;
    int up=0,lo=0,dig=0,spe=0;
    while(*p)
    {
        if(*p>='A' && *p<='Z')
        {
            up = 1;
        }
        else if(*p>='a' && *p<='z')
        {
            lo = 1;
        }
        else if(*p>='0' && *p<='9')
        {
            dig = 1;
        }
        else
        {
            spe = 1;
        }
        p++;
    }
    if(up && lo && dig && spe && p-pass>=8)
    {
        printf("Password is Strong 😎\n");
    }
    else
    {
        printf("Password is Weak 🤔\n");
    }
}
void main()
{   
    char pass[100];
    printf("Enter the password :");
    scanf("%s",pass);
    fun(pass);
}
