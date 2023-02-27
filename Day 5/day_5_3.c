#include<stdio.h>
void main()
{
int no,rem,sum=0,temp;
printf("Enter the number :");
scanf("%d",&no);
temp = no;
while(no>0)
{
rem = no%10;
sum = sum + rem*rem*rem;
no = no/10;
}
printf("Sum of digit is :%d\n",sum);
if(sum==temp)
{
printf("Number is armstrong number\n");
}
else 
{
printf("Number is not armstrong number\n");
}

}



