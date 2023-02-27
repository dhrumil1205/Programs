#include<stdio.h>
void main()
{
int a[15],i,sum=0;

for(i=0;i<5;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("a[%d] =%d\n",i,a[i]);
sum = sum + a[i];
}
printf("Sum of array elements is :%d\n",sum);
}
