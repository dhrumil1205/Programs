#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *start=NULL;
struct node *last=NULL;
//create node;
struct node *createnode()
{
struct node *new=malloc(sizeof(struct node));
printf("Enter the data for new node :");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
return new;
}

void create_doubly_list()
{
int n;
printf("Enter no of nodes :");
scanf("%d",&n);
//first node;
struct node *new;
new=createnode();
start=new;
last=new;
for(int i=1;i<n;i++)
{
new=createnode();
new->prev=last;
last->next=new;
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
last=new;
}
else 
{
new->next=start;
start->prev=new;
start=new;
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
last=new;
}
else 
{
new->prev=last;
last->next=new;
last=new;
}
}

//Add at middle;
void insertatspecific()
{
int x;
printf("Enter the value of x :");
scanf("%d",&x);
struct node *temp,*new;
new=createnode();
temp=start;
while(temp->data!=x)
{
temp=temp->next;
}
new->next = temp->next;
temp->next->prev = new;
temp->next=new;
new->prev=temp;
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
}while(ptr!=NULL);
}
}
void main()
{

create_doubly_list();
insertatfirst();
insertatlast();
insertatspecific();
//deleteatfirst();
//deleteatlast();
display();
}
