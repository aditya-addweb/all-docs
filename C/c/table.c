// Write a program to print a table of 5.
#include <stdio.h>

int main() {
  int n, i=1;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (i<=10)
   {
    printf("%d * %d = %d \n", n, i, n * i);
    i=i+1;
  }
  return 0;
}