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
void enQ(int data)//insertion
{
if(r==(f-1) || (f==0 && r==n-1))//overflow
{
printf("Stack is overflow\n");
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
printf("%d is inserted in the queue f=%d r=%d\n",data,f,r);
}
}
void deQ()//deletation
{
if(f==-1)//underflow
{
printf("Stack is empty");
return;
}
else
{
int x=q[f];
if(f==r)
{
printf("%d is deleted from the queue f=%d r=%d\n",x,f,r);
f=-1;
r=-1;
}
if(f==(n-1))
{
f=0;
printf("%d is deleted from the queue f=%d r=%d\n",x,f,r);
}
else 
{
f=f+1;
printf("%d is deleted from the queue f=%d r=%d\n",x,f,r);
}
}
}
void main()
{
enQ(1);
enQ(10);
enQ(101);
enQ(1001);
enQ(10001);
deQ();
deQ();
deQ();
enQ(100001);
deQ();
deQ();
enQ(102);
deQ();
enQ(220);
display(q);


}
