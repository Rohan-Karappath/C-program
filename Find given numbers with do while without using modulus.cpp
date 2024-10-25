#include <stdio.h>

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 2; i <= number; i += 2) 
	{
        printf("%d\n", i);
    }

    return 0;
}
