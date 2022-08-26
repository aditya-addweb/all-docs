//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main()
{

    for (int n = 20; n >= 1; n--)
    {
        if (n % 2 == 1)
        {
            printf("%d\n", n);
        }
    }
}