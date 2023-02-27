#include<stdio.h>
void scanarray();
void main()
{
int a[10],b[5],c[50];
scanarray(a,10);
scanarray(b,5);
scanarray(c,50);

}

void scanarray(int a[],int n)
{
int i;
printf("Enter the number n :");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("%d element of array :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d element of array :%d\n",i,a[i]);
}

}

