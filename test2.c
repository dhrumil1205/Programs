#include<stdio.h>
void main()
{
int days,mrp,fine;
printf("Enter the days :");
scanf("%d",&days); 

printf("Enetr the mrp of book :");
scanf("%d",&mrp);

if(days<=5)
{
fine = 5*days;
}
else if(days>=6 && days<=10)
{
fine = 25 + (days-5)*10;
}
else if(days>10)
{
fine = 75 + (days-10)*20;

	if(days>30)
		fine = fine>mrp?fine:mrp;
}

printf("Total fine is :%d\n",fine);
}
