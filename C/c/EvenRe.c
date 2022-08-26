//Write a program to print the first 10 even natural numbers in reverse order
#include <stdio.h>
int main()
{

    for (int n = 20; n >=1; n--)
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
    }
}