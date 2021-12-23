#include<stdio.h>
void main()
{
	int sec,Hours,Minutes,Seconds;
	printf("Enter seconds");
	scanf("%d",&sec);
	Hours=sec/3600;
	Minutes=(sec%3600)/60;
	Seconds=(sec%3600)%60;
	printf("%d:%d:%d",Hours,Minutes,Seconds);
}
