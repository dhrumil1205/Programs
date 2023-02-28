#include<stdio.h>
void main()
{
float gs,ts,ti,total_tax;

printf("Enter your gross salary :");
scanf("%f",&gs);
printf("Enter your savings :");
scanf("%f",&ts);


if(ts<=100000)
{
ti = gs-ts;
}
else if(ts>100000)
{
ti = gs - 100000;
}
printf("Taxable Income :%f\n",ti);

if(ti<100000)
{
total_tax = 0;
}
else if(ti>=100000 && ti<200000)
{
total_tax = 0.1*(ti - 100000);
}
else if(ti>=200000 && ti<=500000)
{
total_tax = 0 + 0.1*100000 + 0.2*(ti - 200000);
}
else if(ti>500000)
{
total_tax = 0 + 0.1*100000 + 0.2*300000 +0.3*(ti - 500000);
}
printf("Total payable tax is :%f\n",total_tax);
}
