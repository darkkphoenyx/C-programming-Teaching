//write a program to take two numbers from user and display their sum
#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter the value for a and b:");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum of %d and %d is %d.", a, b, sum);
}