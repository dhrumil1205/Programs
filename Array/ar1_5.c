#include<stdio.h>
void main()
{
int r,c,i,j,sum=0,k,sum_c=0;

printf("Enter the no of row :");
scanf("%d",&r);

printf("Enter the no of column :");
scanf("%d",&c);
int a[r][c];

for(i=0;i<r;i++)
{

	for(j=0;j<c;j++)
	{	  
	  printf("Enter the array for %d x %d :",i,j);
	  scanf("%d",&a[i][j]);
	}
	
}
for(i=0;i<r;i++)
{
sum=0;
sum_c=0;
	for(j=0;j<c;j++)
	{
	 sum = sum+a[i][j];
	}
	if(sum==0)
	{
		for(k=0;k<c;k++)
		{
		sum_c = sum_c+a[k][i];
		}
		if(sum_c==(c-1)
)
		{
		 printf("a[%d] is celibrity\n",i);
		}
	}
}
}
