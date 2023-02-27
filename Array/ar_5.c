#include<stdio.h>
void main()
{
int a[10],i;

for(i=0;i<5;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
int min=a[0];
for(i=0;i<5;i++)
{
if(min>a[i])
{
min = a[i];
} 
}
printf("Minimum number is :%d\n",min);
}
