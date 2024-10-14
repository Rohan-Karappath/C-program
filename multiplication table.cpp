#include <stdio.h>

int main()
 {
    int a, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (a = 1; a <= 10; a++) {
        printf("%d * %d = %d\n", a, n, n* a);
    }

    return 0;
}
