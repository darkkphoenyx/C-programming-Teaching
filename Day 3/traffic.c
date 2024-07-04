#include<stdio.h>
int main() {
    printf("choose a number:");
    printf("\n1.Red");
    printf("\n2.Yellow");
    printf("\n3.Green\n");
    int a;
    scanf("%d", &a);
    if(a==1)
        printf("Stop");
    else if(a==2)
        printf("Be ready");
    else if(a==3)
        printf("GO!!!");
    else
        printf("Not a option.");
}