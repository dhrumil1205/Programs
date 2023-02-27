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
printf("Enter no of nodes :");
scanf("%d",&n);
//first node;
struct node *new;
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

//Add at first;
void insertatfirst()
{
struct node *new;
new=createnode();
if(start==NULL)
{
start=new;
new->next=start;
}
else 
{
new->next=start;
start=new;
last->next=start;
}
}
//Add at last;
void insertatlast()
{
struct node *new;
new=createnode();
if(start==NULL)
{
start=new;
new->next=start;
}
else 
{
new->next=start;
last->next=new;
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
insertatfirst();
insertatfirst();
insertatlast();
insertatlast();
display();
}
