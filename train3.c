#include<stdio.h>
void main()
{
int qb,qp,qs;
float tp,tb,ts,total,gst;
printf("Enter the quantity of burger :");
scanf("%d",&qb);
printf("Enter the quantity of pizza :");
scanf("%d",&qp);
printf("Enter the quantity of sandwitch :");
scanf("%d",&qs);


if(qb>5)
{
tb=0.9*qb*150;
}
else
{
tb=qb*150;
}
if(qp*300>1000)
{
tp=0.85*qp*300;
}
else
{
tp=qp*300;
}
if(qs*100>500)
{
ts=0.8*qs*100;
}
else
{
ts=qs*100;
}
total = tp+tb+ts;
printf("Total bill is :%f\n",total);
gst = 1.12*total;
printf("Bill with gst is :%f\n",gst);
}


