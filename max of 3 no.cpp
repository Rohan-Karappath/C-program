#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	int largest = (num1 >= num2) ? ((num1 >= num3) ? num1 : num3) :
	  ((num2 >= num3) ? num2 : num3);
	  
    if (largest == num1 && largest == num2 && largest == num3) {
        printf("All three numbers are equal: %d\n", largest);
    } else if (largest == num1 && largest == num2) {
        printf("The largest numbers are equal: %d and %d\n", num1, num2);
    }
    	else if (largest==num1 && largest==num3)
    	{
    		printf("The largest numbers are equal: %d and %d\n", num1, num3);
		}
		else if (largest==num2 && largest==num3)
      {
      	printf("The largest numbers are equal: %d and %d\n", num2, num3);
	  }
	  else
	  {
	  	printf("Largest number is %d\n", largest);
	  }
	  return 0;
}
