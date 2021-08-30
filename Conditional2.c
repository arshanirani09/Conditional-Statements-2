#include<stdio.h>
void main()
{
	int c;
	
	printf("Enter a random number between 1 to 5: ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("\n Food item: French Fries \t Price: Rs 99");
			break;
		case 2:
			printf("\n Food item: Pasta \t Price: Rs 179");
			break;
		case 3:
			printf("\n Food item: Sandwich \t Price: Rs 149");
			break;
		case 4:
			printf("\n Food item: Pizza \t Price: Rs 239");
			break;
		case 5:
			printf("\n Food item: Burger \t Price: Rs 129");
			break;
		default:
			printf("Invalid number entered");
			break;
		
	}
}
