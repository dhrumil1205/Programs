#include<stdio.h>
int main()
{
int sp,bp,q,total_p=0,num,i,ls;
printf("How many shares do you have ? :");
scanf("%d",&num);
if(num<=0)
{
printf("Invalid input..Please buy shares...!\n");

}
else
{
	for(i=1;i<=num;i++)
	{
	printf("Enter the buying price of share %d:",i);
	scanf("%d",&bp);
	printf("Enter the quantity of share %d:",i);
	scanf("%d",&q);
	printf("Enter the selling price of share %d:",i);
	scanf("%d",&sp);
	total_p = total_p + (sp*q - bp*q);
	}

}
if(total_p>0)
{
printf("Congratulations...! You are in profit \n");
printf("Your profit is :%d\n",total_p);
}
else if(total_p<0)
{
ls = total_p*(-1);
printf("OH My God...! You are in loss \n");
printf("Your loss is :%d\n",ls);
}
else if(total_p=0)
{
printf("No profit ... No loss \n");
}
return 0;
}
