
//Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value :");
    scanf("%d",&a);
    for (int  i = a; i >=1; i--)
    {
       if (i%2 == 1)
       {
        printf("%d\n",i);
       }
       
    }
    
}