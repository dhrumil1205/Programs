#include<stdio.h>
struct student
{
char name[15];
int rollno;
};

void main()
{
struct student s[6],*p;
int i;
p = &s;
for(i=1;i<6;i++)
{
printf("Student %d info :\n",i);
printf("Name :");
scanf("%s",(*p).name);
printf("Rollno :");
scanf("%d",&(*p).rollno);
}
for(i=1;i<6;i++)
{
printf("Student %d is : %s(%d)\n",i,(*p).name,(*p).rollno);
}
}
