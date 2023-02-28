#include<stdio.h>
struct cricketer
{
char name[20];
int score;
struct cricketer *next;
};

void main()
{
struct cricketer c[3]={{"Rohit",264,c+1},{"Kohli",50,c+2},{"Gill",67,c}};
struct cricketer *p;
p = &c[0];

printf("%s ",p->name);
printf("%d \n",p->score);
p = p->next;
printf("%s ",p->name);
printf("%d \n",p->score);
p = p->next;
printf("%s ",p->name);
printf("%d \n",p->score);
p = p->next;
printf("%s ",p->name);
printf("%d \n",p->score);
}
