#include<stdio.h>
void main()
{
	int num1,area,perimeter;
	printf("Enter a number");
	scanf("%d",&num1);
	area=num1*num1;
	printf("Area of a square with side %d is: %d\n",num1,area);
	perimeter=4*num1;
	printf("Perimeter ofa square with side %d is: %d",num1,perimeter);
	}
