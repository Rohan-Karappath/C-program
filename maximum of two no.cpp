#include<stdio.h>
int main()
{
    int num1,num2;
    int num1 = 10;
    int num2 = 20;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enterbthe second number:");
    scanf("%d",&num2);
    max=num1<num2;
    
    printf("The maximum is: %d\n", max(num1, num2));
    return 0;
}
