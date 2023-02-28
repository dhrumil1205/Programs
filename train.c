#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter number a :");
scanf("%d",&a);
printf("Enter number b :");
scanf("%d",&b);
printf("Enter number c :");
scanf("%d",&c);
printf("Enter number d :");
scanf("%d",&d);

if(a>b && a>c && a>d)
{
printf("a is max");
}
else if(b>a && b>c && b>d)
{
printf("b is max");
}
else if(c>a && c>b && c>d)
{
printf("c is max");
}
else 
{
printf("d is max\n");
}
}
