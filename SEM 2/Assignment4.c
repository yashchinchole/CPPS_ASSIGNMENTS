// NAME - YASH CHINCHOLE
// ROLL NO. - FY21H837

#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int number;
    printf("Enter Number\n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
        printf("%d ", fib(i));

    return 0;
}