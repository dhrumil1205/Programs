#include <stdio.h>
int main() 
{
   int d,i,evn=0,odd=0,n;
   printf("Enter the size of array :");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
        printf("Enter the number of element %d :",i);
        scanf("%d",&a[i]);
   }
   for(i=0;i<n;i+2)
   {
       d = a[i];
       if(d%2==0)
       {
           evn++;
           break;
       }
       if(d%2!=0)
       {
           odd++;
           break;
       }
   }
   for(i=1;i<n;i+2)
   {
       d = a[i];
       if(d%2==0)
       {
           evn++;
           break;
       }
       if(d%2!=0)
       {
           odd++;
           break;
       }
   }
   if(evn==1 || odd==1)
   {
       printf("YES\n");
       
   }
   else
   {
       printf("NO\n");
   }
   
   return 0;
}
