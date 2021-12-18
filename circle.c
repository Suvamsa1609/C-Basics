#include<stdio.h>
void main()
{
	int r;
	float area,peri;
	printf("Enter the value of radius");
	scanf("%d",&r);
	area =3.14*r*r;
	peri=2*3.14*r;
	printf("Area of the circle with radius %d is : %f\n",r,area);
	printf("Perimeter of the circle with radius %d is : %f",r,peri);
}
