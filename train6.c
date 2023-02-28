#include<stdio.h>
void main()
{
int no_mon,no_cpu,pr_mon,pr_cpu,total_p_mon,total_p_cpu;
float comi_cpu,comi_mon,total_comi;

printf("Enter the no of monitor :");
scanf("%d",&no_mon);

printf("Enter the no of cpu :");
scanf("%d",&no_cpu);

printf("Enter the price of monitor :");
scanf("%d",&pr_mon);

printf("Enter the price of cpu :");
scanf("%d",&pr_cpu);

total_p_mon = no_mon*pr_mon;
total_p_cpu = no_cpu*pr_cpu;

if(total_p_cpu<10000)
{
comi_cpu=0;
} 
else if(total_p_cpu>=10000 && total_p_cpu<25000)
{
comi_cpu = 0.08*total_p_cpu;
}
else if(total_p_cpu>=250000)
{
comi_cpu = 2000 + 0.10*(total_p_cpu-25000);
}
if(total_p_mon<10000)
{
comi_mon = 0.05*total_p_mon;
}
else if(total_p_mon>=10000)
{
comi_mon = (0.05*10000)+0.08*(total_p_mon-10000);
}
total_comi = comi_cpu + comi_mon;
printf("Total commision :%f\n",total_comi);
}
