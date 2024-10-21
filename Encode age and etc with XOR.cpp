#include<stdio.h>
int main()
{
	int age, roll_no, encoded_value, decoded_age;
	printf("Enter your age:");
	scanf("%d",&age);
	printf("Enter your roll_no:");
	scanf("%d",&roll_no);
	encoded_value= age^roll_no;
	printf("Encoded age: %d\n",encoded_value);
	decoded_age= encoded_value^roll_no;
	printf("Decoded age: %d\n",decoded_age);
	return 0;
}
