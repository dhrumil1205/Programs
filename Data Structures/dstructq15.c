#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *start=NULL;
struct node *last;
struct node *prev;
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
//Delete at first;
void deleteatfirst()
{
struct node *temp;
if(start==NULL)
{
printf("List is empty\n");
}
else if(start->next==start)
{
temp=start;
start=NULL;
last=NULL;
free(temp);
}
else{
temp=start;
start=start->next;
last->next=start;
free(temp);
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
//Delete at last;
void deleteatlast()
{
struct node *temp;
if(start==NULL)
{
printf("List is empty\n");
}
else if(start->next==start)
{
temp=start;
start=NULL;
last=NULL;
free(temp);
}
else{
temp=start;
while(temp->next!=start)
{
prev = temp;
temp=temp->next;
}
prev->next=start;
last=prev;
free(temp);
}
}
void display()
{
struct node *ptr;
ptr=start;
if(start==NULL)
{
printf("List is empty\n");
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
deleteatfirst();
deleteatlast();
display();
}
