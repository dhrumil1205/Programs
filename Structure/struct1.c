#include<stdio.h>
struct student
{
char name[20];
int roll;
};

void main()
{
struct student s[15],*p;
int i;
p=&s[0];
for(i=1;i<6;i++)
{
printf("Student %d info :\n",i);
printf("Name :");
scanf("%s",(*p).name);
printf("Rollno :");
scanf("%d",&(*p).roll);
p++;
}
p=&s[0];
for(i=1;i<6;i++)
{
printf("Student %d is : %s(%d)\n",i,(*p).name,(*p).roll);
p++;
}
}

