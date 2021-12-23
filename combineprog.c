#include<stdio.h>
void main()
{
	int n,N,EN,ON;
	printf("If n=");
	scanf("%d",&n);
	N=(n*(n+1))/2;
	EN=n*(n+1);
	ON=n*n;
	printf("Sum of first %d natural numbers is %d\n",n,N);
	printf("Sum of first %d even natural numbers is %d\n",n,EN);
	printf("Sum of first %d odd natural numbers is %d",n,ON);
}
