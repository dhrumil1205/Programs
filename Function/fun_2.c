#include<stdio.h>
int total();
int c;
void main()
{
c = total(103,2);
printf("Your total bill is :%d\n",c);

}
int total(int code,int q)
{
int bill=0,price;
if(code==101)
{
price = 150;
}
if(code==102)
{
price = 100; 
}
if(code==103)
{
price = 170;;
}
bill = price*q;

return bill;

}
