#include<stdio.h>
void main()
{
int a[5],b[5],final_value,i,j,diff;

for (i=0;i<5;i++)
{
printf("Enter Element : ");
scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
    {
    final_value=-32768;
    for(j=i+1;j<5;j++)
        {
        diff=a[i]-a[j];
        if(diff>final_value)
        {
        final_value=diff;   
        }
        }
    b[i]=final_value;
    }  
b[4]=a[4];    
for(i=0;i<5;i++)
{
printf("Max in right Diff for %d is %d\n",i,b[i]);
}

}

