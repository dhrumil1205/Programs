#include<stdio.h>
void main()
{
int n,i,j,sum=0,diff=0,ne=0,max=0;
printf("Enter the size of array :");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number of element %d :",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum = a[i];
diff=0;

	for(j=i+1;j<n;j++)
	{
	  diff = a[j] - sum;
	  if(diff>0)
	  {
	   printf("You are in profit\n");
	   printf("Your profit is :%d\n",diff);
		if(max<diff)
		max=diff;
	   
	  }
	  else
	  {
	   ne = -diff;
	   printf("You are in loss\n");
	   printf("Your loss is :%d\n",ne);
	  }
	  
	}

}
printf("Max Profit is : %d \n",max);
}
