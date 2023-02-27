#include <stdio.h>
int f()
{
    int ar1[100000],ar2[100000],n,i,j,sum1 = 0,sum2=0;
    printf("Enter the size :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d element of array1 :",i);
        scanf("%d",&ar1[i]);
        sum1 = sum1 + ar1[i];
    }
    for(j=0;j<n-1;j++)
    {
        printf("%d element of array2 :",j);
        scanf("%d",&ar2[j]);
        sum2 = sum2 + ar2[j];
    }
    return sum1 - sum2;
}

void main() 
{
    int temp;
    temp=f();
    printf("Missing element is :%d\n",temp);
}
