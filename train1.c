#include<stdio.h>
void main()
{
char c;
printf("Enter the character :");
scanf("%c",&c);
if(c>64 && c<91)
{
printf("Uppercase character\n");
}
else if(c>96 && c<123)
{
printf("Lowercase character\n");
}
else if(c>47 && c<58)
{
printf("It is digit\n");
}
else
{
printf("Invalid Input..!\n");
}
}
