#include<stdio.h>
void main()
{
	int amt,tt,fh,th,h,fif,twe,ten,five,two,one;
	printf("enter the amount");
	scanf("%d",&amt);
	tt=amt/2000;
	amt=amt%2000;
	fh=amt/500;
	amt=amt%500;
	th=amt/200;
	amt=amt%200;
	h=amt/100;
	amt=amt%100;
	fif=amt/50;
	amt=amt%50;
	twe=amt/20;
	amt=amt%20;
	ten=amt/10;
	amt=amt%10;
	five=amt/5;
	amt=amt%5;
	two=amt/2;
	amt=amt%2;
	one=amt/1;
	printf("2000 note(s)-->%d\n",tt);
	printf("500 note(s)-->%d\n",fh);
	printf("200 note(s)-->%d\n",th);
	printf("100 note(s)-->%d\n",h);
	printf("50 note(s)-->%d\n",fif);
	printf("20 note(s)-->%d\n",twe);
	printf("10 note(s)-->%d\n",ten);
	printf("5 coin(s)-->%d\n",five);
	printf("2 coin(s)-->%d\n",two);
	printf("1 coin(s)-->%d",one);
	
	
}
