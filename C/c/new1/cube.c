//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
   int a;
   printf("Enter The value :");
   scanf("%d",&a);
    for (int n = 1; n<=a; n++)
    {
        printf("%d\n",n*n*n);
    }
    return 0;
}