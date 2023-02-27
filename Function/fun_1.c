#include<stdio.h>
char grade();
char b;
void main()
{
b = grade(32);
printf("Grade of student is :%c\n",b);

}
char grade(int a)
{
char ans;
if(a<=100 && a>80)
{
ans = 'A';
}
if(a<=80 && a>60)
{
ans = 'B';
}
if(a<=60 && a>40)
{
ans = 'C';
}
if(a<=40 && a>33)
{
ans = 'D';
}
if(a<33)
{
ans = 'F';
}

return ans;

}
