#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* start;
struct node* ptr;

void createlist()
{
int n,i;
printf("Enter the number of nodes :");
scanf("%d",&n);
//First node;
struct node* new=malloc(sizeof(struct node));
printf("Enter the value of data :");
scanf("%d",&new->data);
start = new;
ptr = new;

//for n nodes;
for(i=1;i<n;i++)
{
struct node* new=malloc(sizeof(struct node));
printf("Enter the value of data :");
scanf("%d",&new->data);
new->next=NULL;
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
createlist();

displaylist();
}
