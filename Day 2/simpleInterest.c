//wap to find the simple interest
#include<stdio.h>
int main() {
    int principle;  //principle amount
    float rate, si; // rate
    int time;// time in year
    printf("Enter the Principle amount:");
    scanf("%d", &principle);
    printf("Enter the Rate:");
    scanf("%f", &rate);
    printf("Enter the Time:");
    scanf("%d", &time);
    si = principle * time * rate / 100;
    printf("The simple interest is: %f", si);
    return 0;
}