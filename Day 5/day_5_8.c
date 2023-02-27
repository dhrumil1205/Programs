#include<stdio.h>
void main()
{
int no_holi,dates,de_holi,i;
printf("Enter the number of holidays :");
scanf("%d",&no_holi);

de_holi = 8;

for(i=1;i<=no_holi;i++)
{
printf("Enter the date of holiday %d:",i);
scanf("%d",&dates);
if(dates==6 || dates==7);
else if(dates==13 || dates==14);
else if(dates==20 || dates==21);
else if(dates==27 || dates==28);
else
{
de_holi = de_holi + 1; 
}
}
printf("Total holidays in month are :%d\n",de_holi);
}
