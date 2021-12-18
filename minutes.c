#include<stdio.h>
void main()
{
	int m,hours,minutes;
	printf("Enter Hours and minutes");
	scanf("%d%d",&hours,&m);
	minutes=60*hours+m;
	printf("%d minutes",minutes);
}
