#include<stdio.h>
void f();
void f1();
void main()
{
int n,a[10][10],m;
printf("Enter the number of n:");
scanf("%d",&n);
printf("Enter the number of m:");
scanf("%d",&m);

f(a,n,m);
f1(a,n,m);
}
void f(int *p,int n,int m)
{
int i,j;

for(i=0;i<n;i++)
{
for(j=0;j<m;j++){
printf("Element of the %d x %d array is :",i,j);
scanf("%d",p);
p = p+1;
}
}
}
void f1(int *p,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++){
printf("a[%d][%d]element is :%d\n",i,j,*p);
p = p+1;
}
}

}
