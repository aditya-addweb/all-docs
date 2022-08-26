//Write a program to print a table of N.
#include <stdio.h>

int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (int i = 1; i <=n; i++)
  
   {
    printf("%d * %d = %d \n", n, i, n * i);
    i=i+1;
  }
  return 0;
}