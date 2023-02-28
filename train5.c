#include<stdio.h>
void main()
{
int nq,ca,inca,cq,inc_que,marks,total_m;
float per;
printf("Enter the number of ques :");
scanf("%d",&nq);
printf("Enter the marks of correct answer :");
scanf("%d",&ca);
printf("Enter the marks of incorrect answer :");
scanf("%d",&inca);
printf("Enter the correct ques :");
scanf("%d",&cq);
inc_que = nq-cq;
printf("Incorrect ques :%d\n",inc_que);
marks = cq*ca;
printf("Total marks :%d\n",marks);
total_m = ca*nq;
per = (marks*100)/total_m;
printf("Percentage :%f\n",per);
if(per>50)
{
printf("Student is pass\n");
}
else 
{
printf("Student is fail\n");
}
}
