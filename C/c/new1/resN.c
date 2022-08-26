//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main(){
int a;
printf("Enter the Value :");
scanf("%d",&a);
printf("Natural Number from %d to 1", a);
for (int i = a; i >= 1; i--)
{
    printf("%d\n", i);
}
    return 0;
}
