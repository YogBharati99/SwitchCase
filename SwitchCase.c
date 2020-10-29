#include<stdio.h>
void main()
{
	printf("\n 1. French Fries, Rs 99 \n \n 2. Burger, Rs 129 \n \n 3. Sandwich, Rs 149 \n \n 4. Pasta, Rs 179 \n \n 5. Pizza, Rs 239 \n");
	
	int choice=0;
	printf(" \n Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("Food Item - French Fries \n");
				 printf("Price - Rs 99");
				 break;
				 
		case 2 : printf("Food Item - Burger \n");
				 printf("Price - Rs 129");
				 break;
		
		case 3 : printf("Food Item - Sandwich \n");
				 printf("Price - Rs 149");
				 break;
		
		case 4 : printf("Food Item - Pasta \n");
				 printf("Price - Rs 179");
				 break;
		
		case 5 : printf("Food Item - Pizza \n");
				 printf("Price - Rs 239");
				 break;
				 			
		default : printf("Invalid Choice");
	}
}
