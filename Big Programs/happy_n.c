#include<stdio.h>
void main()
{
    int n,sum=0,d;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Number is happy number");
    }
    else 
    {
    while(n!=1 && n != 4)
    {
        sum=0;
        while(n>0)
        {
            d = n%10;
            sum = sum+d*d;
            n=n/10;
        }
    n = sum;
    printf("%d\n",n);
    }
    printf("Sum is =%d\n",sum);
    if(sum==1)
    {
     printf("Inputed number is Happy number\n");   
    }
    else 
    {
        printf("Number is not a Happy number\n");
    }
    
        
    }
    

}
