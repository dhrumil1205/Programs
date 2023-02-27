#include<stdio.h>
int main()
{
char order,tamp;
int choice,quan,price;
float total_bill=0,final_bill;
printf("Welcome to eInfochips Restaurant..!\n");
printf("What do you want to eat ?\n 1.Punjabi(P) \n 2.Gujarati(G) \n 3.South Indian(S)\n 4.Nothing(N)\nEnter your input :\n");
scanf("%c",&order);
if(order=='N' || order=='n')
{
printf("Thank you...Visit again!\n");
return 0;
}
else
{
while(order!='N' && order!='n')
{

	switch(order)
	{
	case 'P':
	printf("Punjabi Items\n");
	printf("1. Paneer Tikka-130/-(0)\n2. Paneer Angara-150/-(1)\n3. Veg Handi-120/-(2)\n4. Shahi Paneer-110/-(3)\n5. Paneer Bhurji-100/-(4)");
	scanf("%d",&choice);
	printf("Enter the quantity :");
	scanf("%d",&quan);
	if(choice==0)
	{
	price = 130*quan; 
	total_bill = total_bill + price; 
	}
	else if(choice==1)
	{
	price = 150*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==2)
	{
	price = 120*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==3)
	{
	price = 110*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==4)
	{
	price = 100*quan; 
	total_bill = total_bill + price;
	}
	break;
	case 'p':
	printf("Punjabi Items\n");
	printf("1. Paneer Tikka-130/-(0)\n2. Paneer Angara-150/-(1)\n3. Veg Handi-120/-(2)\n4. Shahi Paneer-110/-(3)\n5. Paneer Bhurji-100/-(4)");
	scanf("%d",&choice);
	printf("Enter the quantity :");
	scanf("%d",&quan);
	if(choice==0)
	{
	price = 130*quan; 
	total_bill = total_bill + price; 
	}
	else if(choice==1)
	{
	price = 150*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==2)
	{
	price = 120*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==3)
	{
	price = 110*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==4)
	{
	price = 100*quan; 
	total_bill = total_bill + price;
	}
	break;

	case 'G':
	printf("Gujarati Items\n");
	printf("1. Sev Tameta-70/-(0)\n2. Lasaniya Bateka-80/-(1)\n3. Odo Rotla-120/-(2)\n4. Haldi Rotla-150/-(3)\n5. Mix Sabji-90/-(4)");
	scanf("%d",&choice);
	printf("Enter the quantity :");
	scanf("%d",&quan);
	if(choice==0)
	{
	price = 70*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==1)
	{
	price = 80*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==2)
	{
	price = 120*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==3)
	{
	price = 150*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==4)
	{
	price = 90*quan; 
	total_bill = total_bill + price;
	}
	break;
	case 'g':
	printf("Gujarati Items\n");
	printf("1. Sev Tameta-70/-(0)\n2. Lasaniya Bateka-80/-(1)\n3. Odo Rotla-120/-(2)\n4. Haldi Rotla-150/-(3)\n5. Mix Sabji-90/-(4)");
	scanf("%d",&choice);
	printf("Enter the quantity :");
	scanf("%d",&quan);
	if(choice==0)
	{
	price = 70*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==1)
	{
	price = 80*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==2)
	{
	price = 120*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==3)
	{
	price = 150*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==4)
	{
	price = 90*quan; 
	total_bill = total_bill + price;
	}
	break;

	case 'S':
	printf("South Indian Items\n");
	printf("1. Idli-120/-(0)\n2. Dosa-90/-(1)\n3. Uttapam-70/-(2)\n4. Mendu Vada-60/-(3)\n5. Lemon Rice-75/-(4)");
	scanf("%d",&choice);
	printf("Enter the quantity :");
	scanf("%d",&quan);
	if(choice==0)
	{
	price = 120*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==1)
	{
	price = 90*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==2)
	{
	price = 70*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==3)
	{
	price = 60*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==4)
	{
	price = 75*quan; 
	total_bill = total_bill + price;
	}
	break;
	case 's':
	printf("South Indian Items\n");
	printf("1. Idli-120/-(0)\n2. Dosa-90/-(1)\n3. Uttapam-70/-(2)\n4. Mendu Vada-60/-(3)\n5. Lemon Rice-75/-(4)");
	scanf("%d",&choice);
	printf("Enter the quantity :");
	scanf("%d",&quan);
	if(choice==0)
	{
	price = 120*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==1)
	{
	price = 90*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==2)
	{
	price = 70*quan;
	total_bill = total_bill + price; 
	}
	else if(choice==3)
	{
	price = 60*quan; 
	total_bill = total_bill + price;
	}
	else if(choice==4)
	{
	price = 75*quan; 
	total_bill = total_bill + price;
	}
	break;
	}
	printf("Anything else do you want to eat ?\n 1.Punjabi(P) \n 2.Gujarati(G) \n 3.South Indian(S)\n 4.Nothing(N) :\n");
	scanf("%c",&tamp);
	scanf("%c",&order);
}
}
final_bill = total_bill*1.05; 
printf("Your final total bill is :%f\n",final_bill);
}
