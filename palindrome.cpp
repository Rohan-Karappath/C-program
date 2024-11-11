#include<stdio.h>
int main()
{
	int num=6336, rev=0;
	int originalNum = num;
	
	while(num !=0)
	{
		rev=rev*10+num%10;
		num/=10;
	}
	if (originalNum == rev) 
	{
        printf("%d is a palindrome.\n", originalNum);
    }
	 else 
	{
        printf("%d is not a palindrome.\n", originalNum);
    }
	printf("Reversed Number=%d\n", rev);
	return 0;
}
