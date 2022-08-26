//Write a program to print the first N natural numbers.
#include<stdio.h>
int main(){
    int p;
  printf("Enter natural number : \n") ;
  scanf("%d",&p);
   printf("Natural numbers from 1 to %d : \n", p);
   for (int n = 1; n <= p; n++)
   {
    printf("%d\n",n);
   }
   
   
}