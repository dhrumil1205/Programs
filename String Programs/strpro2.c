#include <stdio.h>
#include <string.h>
void fun(char *s)
{
    int lt=0,ab=0,pr=0,flag=1,i;
    char late[]="LLL";
    while(*s!='\0')
    {
        flag=1;
        for(i=0;i<3;i++){
            if(!(s[i]==late[i])){
                flag=0;
                break;
            }
        }
        if(flag==1){
            break;
        }
    if(*s=='A')
    {
        ab++;
    }
    s++;
    }
    if(ab==2 || flag==1){
        printf("False\n");
    }
    else
    printf("True\n");
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
