#include<stdio.h>
void main()
{
int a,b,ans,choice;
printf("Enter the value of a :");
scanf("%d",&a);
printf("Enter the value of b :");
scanf("%d",&b);
printf("Enter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1 :
	ans = a+b;
	printf("Addition of two numbers is :%d\n",ans);
	break;
case 2 :
	ans = a-b;
	printf("Subtraction of two numbers is :%d\n",ans);
	break;
case 3 :
	ans = a*b;
	printf("Multiplication of two numbers is :%d\n",ans);
	break;
case 4 :
	ans = a/b;
	printf("Division of two numbers is :%d\n",ans);
	break;
}
}
