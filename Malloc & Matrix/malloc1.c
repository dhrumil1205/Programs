#include<stdio.h>
#include<stdlib.h>
void main()
{
int *list=malloc(3*sizeof(int));

list[0]=1;
list[1]=2;
list[2]=3;
for(int i=0;i<3;i++)
{
printf("Element %d is %d\n",i,list[i]);
}
}

