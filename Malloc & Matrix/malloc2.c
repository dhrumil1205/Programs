#include<stdio.h>
#include<stdlib.h>
void main()
{
int *list=malloc(3*sizeof(int));

list[0]=1;
list[1]=2;
list[2]=3;
int *temp=malloc(4*sizeof(int));
for(int i=0;i<3;i++)
{
	temp[i]=list[i];
}
temp[3] = 5;
free(list);
list = temp;
for(int i=0;i<4;i++)
{
printf("Element %d is %d\n",i,list[i]);
}
}

