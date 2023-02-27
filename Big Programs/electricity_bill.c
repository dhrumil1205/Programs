#include<stdio.h>
void main()
{
int cus,phase,unit;
float ptax,bill,total=0;

printf("Type of customer \n 1.Domestic(0)\n2.Commercial(1) :");
scanf("%d",&cus);
printf("Type of phase \n 1.Singlephase(0)\n2.Three phase(1) :");
scanf("%d",&phase);
printf("Enter the units :");
scanf("%d",&unit);

ptax = 0.06*unit;

if(cus==0)
{
	if(phase==0)
	{
		if(unit<=50)
		{
		  bill = 1.45*unit;		
		}
		else if(unit>=51 && unit<=100)
		{
		  bill = 50*1.45 + (unit-50)*2.85;		
		}
		else if(unit>=101 && unit<=200)
		{
		  bill = 50*1.45 + 50*2.85 + (unit-100)*3.95;		
		}
		else if(unit>200)
		{
		  bill = 50*1.45 + 50*2.85 + 100*3.95 + (unit-200)*4.50;		
		}
		if(ptax>20)
		{
		total = bill + 10 + ptax;
		}
		else 
		{
		total = bill + 10 + 20;
		}
		printf("Total bill is :%f\n",total);
	}

	else if(phase==1)
	{
		if(unit<=50)
		{
		  bill = 1.45*unit;		
		}
		else if(unit>=51 && unit<=100)
		{
		  bill = 50*1.45 + (unit-50)*2.85;		
		}
		else if(unit>=101 && unit<=200)
		{
		  bill = 50*1.45 + 50*2.85 + (unit-100)*3.95;		
		}
		else if(unit>200)
		{
		  bill = 50*1.45 + 50*2.85 + 100*3.95 + (unit-200)*4.50;		
		}
		if(ptax>50)
		{
		total = bill + 10 + ptax;
		}
		else 
		{
		total = bill + 10 + 50;
		}
		printf("Total bill is :%f\n",total);
	}

}
else if(cus==1)
{
	if(phase==0)
	{
		if(unit>=0 && unit<=100)
		{
		  bill = unit*3.95;
		}	
		else if(unit>100)
		{
		  bill = 100*3.95 + (unit-100)*7;
		}
		if(ptax>50)
		{
		total = bill + 20 + ptax;
		}
		else 
		{
		total = bill + 20 + 50;
		}
		printf("Total bill is :%f\n",total);
		
	}
	else if(phase==1)
	{
		if(unit>=0 && unit<=100)
		{
		  bill = unit*3.95;
		}	
		else if(unit>100)
		{
		  bill = 100*3.95 + (unit-100)*7;
		}
		if(ptax>100)
		{
		total = bill + 20 + ptax;
		}
		else 
		{
		total = bill + 20 + 100;
		}
		printf("Total bill is :%f\n",total);
		
	}
}
}
