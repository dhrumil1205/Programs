#include <stdio.h>
void main()
{
int a,b,c,d,e,f,sum=0;
int max1, max2, max3;
printf("Enter number a: ");
scanf("%d",&a);
printf("Enter number b: ");
scanf("%d",&b);
printf("Enter number c: ");
scanf("%d",&c);
printf("Enter number d: ");
scanf("%d",&d);
printf("Enter number e: ");
scanf("%d",&e);
printf("Enter number f: ");
scanf("%d",&f);


max1 = a;
if (b > max1)
{
max1 = b;
}
if (c > max1)
{
 max1 = c;
}
if (d > max1)
{
 max1 = d;
}
if (e > max1)
{max1 = e;

}
if (f > max1)
{max1 = f;
}

max2 = a;
if (b > max2 && b < max1)
{max2 = b;

}
if (c > max2 && c < max1)
{max2 = c;

}
if (d > max2 && d < max1)
{max2 = d;

}
if (e > max2 && e < max1)
{max2 = e;

}
if (f > max2 && f < max1)
{max2 = f;

}

max3 = a;
if (b > max3 && b < max2)
{max3 = b;

}
if (c > max3 && c < max2)
{max3 = c;

}
if (d > max3 && d < max2)
{max3 = d;

}
if (e > max3 && e < max2)
{max3 = e;

}
if (f > max3 && f < max2)
{max3 = f;

}
sum = max1 + max2 + max3;
printf("Sum of the three largest numbers: %d\n", sum);
}


