#include<stdio.h>
void main()
{
int a[15],i;

for(i=0;i<5;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("a[%d] =%d\n",i,a[i]);
}
}
