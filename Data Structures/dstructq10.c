#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* start;
struct node* ptr;
struct node* last;
struct node* prev;

void insertatfirst()
{

//First node;
struct node* new=malloc(sizeof(struct node));
printf("Enter the value of data :\n");
scanf("%d",&new->data);
new->next=NULL;
if(start == NULL)
{
start = new;
ptr=new;
}
else
{
new->next=start;
start=new;
}

}
void deleteatfirst()
{
struct node* temp;
if(start == NULL)
{
printf("Link list is empty\n");
}
else if(start->next == NULL)
{
temp=start;
start=NULL;
free(temp);
}
else
{
temp = start;
start = start->next;
free(temp);
}

}
void insertbefore(int data)
{
struct node* new=malloc(sizeof(struct node));
printf("Enter the value of data :\n");
scanf("%d",&new->data);
new->next=NULL;
last=start;
while((last->data)!=data)
{
prev=last;
last=last->next;
}
new->next = prev->next;
prev->next = new;
}


void insertatend()
{

//First node;
struct node* new=malloc(sizeof(struct node));
printf("Enter the value of data :\n");
scanf("%d",&new->data);
new->next=NULL;
if(start == NULL)
{
start = new;
ptr=new;
printf("Starting node and ending node is single node\n");
}
else
{
ptr->next=new;
ptr=new;
}

}

void displaylist()
{

ptr=start;
int i=0;
while(ptr!=NULL)
{
printf("Node = %d Value=%d\n",i+1,ptr->data);
i++;
ptr=ptr->next;
}
}

void main()
{
insertatfirst();
insertatfirst();
insertatfirst();
insertatend();
insertatend();
insertatend();
displaylist();
insertbefore(40);
deleteatfirst();
displaylist();

}
