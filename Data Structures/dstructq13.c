#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *start=NULL;
struct node *last;
struct node *createnode()
{
struct node *new=malloc(sizeof(struct node));
printf("Enter the data for new node :");
scanf("%d",&new->data);
new->next=NULL;

return new;
}

void create_circular_list()
{
int n;
printf("Enter no of nodes");
scanf("%d",&n);
//first node;
struct node *new,*last;
new=createnode();
start=new;
new->next=start;
last=new;
for(int i=1;i<n;i++)
{
new=createnode();
last->next=new;
new->next=start;
last=new;
}
}
void display()
{
struct node *ptr;
ptr=start;
if(start==NULL)
{
printf("List is empty");
}
else
{
do{
printf("%d\n",ptr->data);
ptr=ptr->next;
}while(ptr!=start);
}
}
void main()
{

create_circular_list();
display();
create_circular_list();
display();
}
