#include<stdio.h>
void main()
{
int n,i,j,range,count=0;
printf("Enter the number :");
scanf("%d",&range);
for(j=3;j<=range;j++)
{
	for(i=2;i<j;i++)
	{
	if(j%i==0)
	{
	break;
	}
	else
	{
	printf("%d\n",j);	
	count++;
	break;
	}

}
}
printf("Total prime numbers are :%d\n",count);
}
