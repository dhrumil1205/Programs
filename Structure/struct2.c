#include<stdio.h>
typedef struct point
{
int x,y;
} point;

point sum(point A,point B)
{
point temp;
temp.x = A.x + B.x;
temp.y = A.y + B.y;
return temp; 
}

void main()
{
point p1,p2,c;
p1.x=10;
p1.y=20;
p2.x=50;
p2.y=60;

c = sum(p1,p2);
printf("Sum of x is %d and Sum of y is %d \n",c.x,c.y);
}
