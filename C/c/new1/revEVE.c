//Write a program to print the first N even natural numbers in reverse order

#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Value :");
    scanf("%d",&a);
    printf("Print The N natural number value");
    for (int n = a; n>=1; n--)
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
    }
}