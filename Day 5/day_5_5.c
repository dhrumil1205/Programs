#include<stdio.h>
void main()
{
int n,rem,sum=0,temp=0,i,c=0;
printf("Enter the number :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{

sum=0;
temp =i;
while(temp!=0)
{
rem = temp%10;
sum = sum + rem*rem*rem;
temp = temp/10;

}

if(sum==i)
{
printf("%d\n",i);
c++;
}
}
printf("Total armstrong numbers are :%d\n",c);

}



