#include<stdio.h>
int r =-1;
int f = -1;
int q[5];
int n = 5;
void display(int *q)
{
int i;
if(f<=r)
{
for(i=f;i<=r;i++)
{
printf("%d\n",q[i]);
}
}
else{
for(i=f;i<n-1;i++)
{
printf("%d\n",q[i]);
}
for(i=0;i<r;i++)
{
printf("%d\n",q[i]);
}
}
}
void enQ_f(int data)//insertion
{
if(r==(f-1) || (f==0 && r==n-1))//overflow
{
printf("Queue is overflow\n");
return;
}
else
{
if(f==-1)//for single element
{
f=0;
r=0;
}
else{
if(f==0){
f=n-1;
}
else
{
printf("%d is inserted in the queue form front f=%d r=%d\n",data,f,r);
f=f-1;
}
}
q[f]=data;
printf("%d is inserted in the queue form front f=%d r=%d\n",data,f,r);
}
}
void enQ_b(int data)//insertion
{
if(r==(f-1) || (f==0 && r==n-1))//overflow
{
printf("Queue is overflow\n");
return;
}
else
{
if(f==-1)//for single element
{
f=0;
}
if(r==(n-1))
{
r=-1;
}
r=r+1;
q[r]=data;
printf("%d is inserted in the queue form back f=%d r=%d\n",data,f,r);
}
}
void deQ_f()//deletation
{
if(f==-1)//underflow
{
printf("Queue is empty");
return;
}
else
{
int x=q[f];
if(f==r)
{
printf("%d is deleted from the queue from front f=%d r=%d\n",x,f,r);
f=-1;
r=-1;
}
if(f==(n-1))
{
f=0;
printf("%d is deleted from the queue from front f=%d r=%d\n",x,f,r);
}
else 
{
f=f+1;
printf("%d is deleted from the queue from front f=%d r=%d\n",x,f,r);
}
}
}
void deQ_b()//deletation
{
if(f==-1)//underflow
{
printf("Queue is empty");
return;
}
else
{
int x=q[r];
if(f==r)
{
printf("%d is deleted from the queue from back f=%d r=%d\n",x,f,r);
f=-1;
r=-1;
}
else
{
if(r==0){
r=n-1;
}
else{
//printf("%d is deleted from the queue from back f=%d r=%d\n",x,f,r);
r=r-1;
}
}
if(f==(n-1))
{
f=0;
printf("%d is deleted from the queue from back f=%d r=%d\n",x,f,r);
}
else 
{
printf("%d is deleted from the queue from back f=%d r=%d\n",x,f,r);
}
}
}
void main()
{
enQ_f(1);
enQ_b(10);
enQ_f(101);
enQ_f(1001);
enQ_b(10001);
enQ_b(100001);
deQ_f();
//printf("\n\n%d %d\n",f,r);
deQ_f();
//printf("\n\n%d %d\n",f,r);
deQ_b();
//printf("\n\n%d %d\n",f,r);
enQ_b(100001);
//printf("\n\n%d %d\n",f,r);
//deQ();
//deQ();
//enQ(102);
//deQ();
//enQ(220);
display(q);


}
