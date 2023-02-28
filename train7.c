#include<stdio.h>
void main()
{
int d,y,q;

printf("Enter the department \n 1.IT(0)\n2.Account(1)\n3.HR(2) :");
scanf("%d",&d);
printf("Enter the experience of year :");
scanf("%d",&y);
printf("Enter the qualifiaction \n 1.PG(0)\n 2.G(1) :");
scanf("%d",&q);

if(d==0)
{
	if(q==0)
	{
		if(y>=10)
		{
		  printf("Salary is 150000\n");
		}
		else 
		{
		  printf("Salary is 100000\n");
		}
	}
	if(q==1)
	{
		if(y>=10)
		{
		  printf("Salary is 100000\n");
		}
		else 
		{
		  printf("Salary is 70000\n");
		}
	}
}
else if(d==1)
{
	if(q==0)
	{
		if(y>=10)
		{
		  printf("Salary is 120000\n");
		}
		else 
		{
		  printf("Salary is 100000\n");
		}
	}
	if(q==1)
	{
		if(y>=10)
		{
		  printf("Salary is 90000\n");
		}
		else 
		{
		  printf("Salary is 60000\n");
		}
	}
}
else if(d==2)
{
	if(q==0)
	{
		if(y>=10)
		{
		  printf("Salary is 100000\n");
		}
		else 
		{
		  printf("Salary is 90000\n");
		}
	}
	if(q==1)
	{
		if(y>=10)
		{
		  printf("Salary is 80000\n");
		}
		else 
		{
		  printf("Salary is 50000\n");
		}
	}
}
}
