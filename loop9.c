#include <stdio.h>

main() 
{
    int n, factorial = 1, num = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (num <= n) 
	{
        factorial *= num;
        num++;
    }

    printf("The factorial of %d is: %d\n", n, factorial);

}

