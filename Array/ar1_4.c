#include<stdio.h>
void main()
{
int r,c,i,j;
printf("Enter the no of row :");
scanf("%d",&r);

printf("Enter the no of column :");
scanf("%d",&c);
int a[r][c];

for(i=0;i<r;i++)
{

	for(j=0;j<c;j++)
	{
	  printf("Enter the array %d x %d :",i,j);
	  scanf("%d",&a[i][j]);
	}
	
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d     ",a[i][j]);
}
printf("\n");
}
}
