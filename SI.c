#include<stdio.h>
void main()
{
	float P,T,R,SI;
	printf("Enter the value of Principal");
	scanf("%f",&P);
	printf("Enter Rate of Interest");
	scanf("%f",&R);
	printf("Enter Time");
	scanf("%f",&T);
	SI=P*T*R/100;
	printf("Simple Interest is: %.2f",SI);
}
