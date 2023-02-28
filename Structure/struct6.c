#include<stdio.h>
typedef struct date
{
    int d;
    int m;
    int y;
}check;
void compare(check *s)
{
    if(s[1].d==s[2].d && s[1].m==s[2].m && s[1].y==s[2].y)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }
}
void main()
{
    int i;
    check s[5],*p;
    p = &s[1];
    for(i=1;i<3;i++)
    {
        printf("Enter the date %d : ",i);
        scanf("%d %d %d",&(*p).d,&(*p).m,&(*p).y);
        p++;
    }
    compare(s);
}
