// Write a program to print the first 10 odd natural numbers

#include <stdio.h>
int main()
{

    for (int n = 1; n <= 20; n++)
    {
        if (n % 2 == 1)
        {
            printf("%d\n", n);
        }
    }
}