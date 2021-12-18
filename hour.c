#include<stdio.h>
void main()
{
    int min,H,m;
    printf("Enter minutes");
	scanf("%d",&min);
	H=min/60;
	m=min%60;
	printf("%d hours and %d minutes",H,m);
}
