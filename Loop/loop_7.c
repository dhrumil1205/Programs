#include<stdio.h>
void main()
{
int n,num,p=0,ne=0,z=0,e=0,o=0,i;
printf("Enter the n numbers :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter the numbers :");
scanf("%d",&num);

if(num>0)
{
p++;
}
if(num<0)
{
ne++;
}
if(num==0)
{
z++;
}
if(num%2==0)
{
e++;
}
if(num%2!=0)
{
o++;
}
}
printf("Odd no :%d\n",o);
printf("Even no :%d\n",e);
printf("Zero no :%d\n",z);
printf("Negative no :%d\n",ne);
printf("Positive no :%d\n",p);
printf("Counter :%d\n",p+ne+z+e+o);
}
