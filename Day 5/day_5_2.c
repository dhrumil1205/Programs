#include<stdio.h>
void main()
{
int no,rem,rev=0,temp;
printf("Enter the number :");
scanf("%d",&no);
temp = no;
while(no>0)
{
rem = no%10;
rev = rev*10 + rem;
no = no/10;
}
printf("Reverse number is :%d\n",rev);

if(temp==rev)
{
printf("Inputed number is Palindrome\n");
}
else
{
printf("Inputed number is not Palindrome\n");
}
}
