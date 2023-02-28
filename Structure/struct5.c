#include<stdio.h>
typedef struct student 
{
    char name[50];
    int roll;
    char dep[5];
    int year;
}check;

void fun(check *s,int y,int n)
{
    printf("Student info having rollno %d are :-\n",y);
    for(int i=0;i<n;i++){
    if((*s).roll == y)
    {
	
        printf("Student Name :%s\n",(*s).name);
        printf("Student Roll :%d\n",(*s).roll);
        printf("Student Department :%s\n",(*s).dep);
        printf("Joining Year :%d\n",(*s).year);
    }
    s++;
    }
}
void main()
{
    check s[15],*p;
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    p=&s[0];
    for(i=1;i<n+1;i++)
    {
        printf("Student %d info :\n",i);
        printf("Name :");
        scanf("%s",(*p).name);
        printf("Department :");
        scanf("%s",(*p).dep);
        printf("Rollno :");
        scanf("%d",&(*p).roll);
        printf("Year :");
        scanf("%d",&(*p).year);
        p++;
    }
    fun(s,77,n);
}
