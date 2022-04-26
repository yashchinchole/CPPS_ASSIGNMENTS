// NAME - YASH CHINCHOLE
// ROLL NO. - FY21H837

#include <stdio.h>

long long int fib(int n)
{
    if (n == 1)
        return 0;

    else if (n == 2)
        return 1;

    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    long long int number;
    printf("Enter Number\n");
    scanf("%lld", &number);

    for (int i = 1; i <= number; i++)
        printf("%lld ", fib(i));

    return 0;
}