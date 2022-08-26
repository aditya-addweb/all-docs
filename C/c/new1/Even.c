//Write a program to print the first N even natural numbers

#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Value :");
    scanf("%d",&a);
    printf("Print The N natural number value");
    for (int n = 1; n <=a; n++)
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
    }
}