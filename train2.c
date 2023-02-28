#include<stdio.h>
void main()
{
int quantity,price,bill;
float dis;
printf("Enter the quantity :");
scanf("%d",&quantity);
printf("Enter the amount :");
scanf("%d",&price);

bill = quantity*price;
printf("Total bill :%d\n",bill);

if(quantity>1000)
{
dis = 0.9*bill;
printf("Discount is :%f\n",dis);
}
else
{
printf("No discount is given\n");
}
}
