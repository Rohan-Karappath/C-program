#include<stdio.h>
int main()
{
	int y;
	printf("Enter a year:");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("%d is a leap year then:",y);
	}
	else if(y%4==4 &&100)
	{
		printf("%d is  not a leap year:");
	}
	else if(y%4==100)
	{
		printf("%d is a leap year:");
	}
	return 0;
}
