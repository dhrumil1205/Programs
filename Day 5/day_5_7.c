#include<stdio.h>
void main()
{
int n,temp,d,pal,rev=0,rem,l;
printf("Enter the number :");
scanf("%d",&n);
temp = n;
while(n!=0)
{
d = n%10;
rev = rev*10 + d;
n = n/10;
}
if(temp==rev)
{
printf("Number %d is palindrome\n",temp);
}
else if(temp!=rev)
{
printf("Number %d is not palindrome\n",temp);
pal = temp/10;
l=temp;
while(pal>0)
{
rem = pal%10;
l = l*10 + rem;
pal = pal/10;
}
printf("Converted number :%d\n",l);
}
}
