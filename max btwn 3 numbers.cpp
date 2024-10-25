#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three numbers :");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
			if(num1>num3)
    	{
		printf("num1 is greater than num2 and num3");
	    }
	}
	else if(num2>num3)
	{
		if(num2>num1)
		{
			printf("num2 is greater than num1 and num2");
		}
	}
	else if(num3>num2)
	{
		if(num3>num2)
		{
			printf("num3 is greater than num1 and num2");
		}
	}
	
	return 0;
}
