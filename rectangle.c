#include<stdio.h>
void main()
{
	int length,width,area,peri;
	printf("Enter the values of length and width");
	scanf("%d%d",&length,&width);
	area=length*width;
	printf("Area of the rectangle with length %d and width %d is:%d\n",length,width,area);
	peri=2*length+2*width;
	printf("Perimeter of the rectangle with length %d and width %d is: %d",length,width,peri);
}
