#include<stdio.h>
void main()
{
int n,i,s,pr;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
printf("Enter the number index number :");
scanf("%d",&s);
pr = a[s];
printf("Number is :%d\n",pr);


}
