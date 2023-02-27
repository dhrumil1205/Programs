#include<stdio.h>
void main()
{
int a[10],i,max=0;

for(i=0;i<5;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if(a[i]>max)
{
max = a[i];
} 
}
printf("Maximum number is :%d\n",max);
}
