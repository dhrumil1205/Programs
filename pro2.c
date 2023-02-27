#include<stdio.h>
void f();
void f1();
void main()
{
int n,a[10];
printf("Enter the number of n:");
scanf("%d",&n);
f(a,n);
f1(a,n);
}
void f(int *p,int n)
{
int i;

for(i=0;i<n;i++)
{
printf("%d element of the array is :",i);
scanf("%d",p);
p = p+1;
}
}
void f1(int *p,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d element is :%d\n",i,*p);
p = p+1;
}

}
