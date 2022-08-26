//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main(){
    int n ,sum =0;
    printf("Enter the Number :");
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
      sum +=i;
    }
    printf("Sum of = %d",sum);
    return 0;
}