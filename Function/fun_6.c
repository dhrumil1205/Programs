#include<stdio.h>
int isprime();

void main()
{
int a;
a = isprime();
printf("%d\n",a);
if(a==0)
{
printf("Number is not prime\n");
}
if(a==1)
{
printf("Number is prime\n");
}

}

int isprime(int n)
{
int count=1;
printf("enter any number: ");
scanf("%d",&n);

if(n%2==0)
{count=0;}

if(count==1)
    {return 1;}
else
    {return 0;}
}
