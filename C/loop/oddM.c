//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int a , sum = 0,i=1;
    printf("Enter the value :");
    scanf("%d",&a);
    while (i<=a)
    {
       if (i%2 == 0)
       {
        printf("%d\n",i);
         sum = sum +i;
       
      
       }
         printf("sum of %d",sum);
        i++;
        
    }
    return 0;
}