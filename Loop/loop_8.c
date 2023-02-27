#include<stdio.h>
void main()
{
int n,choice,total_p=0,quan;
printf("Enter the number of n (0 or 1) :");
scanf("%d",&n);

while(n!=0)
{
printf("Which item do you want? \n 1.Pizza(101)\n2.Buger(102)\n3.Sandwich(103) :");
scanf("%d",&choice);
printf("Enter quantity of item :");
scanf("%d",&quan);

switch(choice)
{
case 101 :
	total_p = total_p+150*quan;
	break;
case 102 :
	total_p = total_p + 200*quan;
	break;
case 103 :
	total_p = total_p + 100*quan;
	break;
}

printf("Do you want to order another item ?\nFor Yes(1)\n For No(0) :");
scanf("%d",&n);
}

printf("Total bill is :%d\n",total_p);
}
