#include<stdio.h>
int main() {
    int a = 5;
    printf("a = %d\n", ++a);  //6
    printf("a = %d\n", --a);  //5
    printf("a = %d\n", a++);  //5
    printf("a = %d\n", a);    //5 or 6
    printf("a = %d\n", a--);  //4?
    printf("a = %d\n", --a);  //4?
    printf("a = %d\n", a);    //5?
    printf("a = %d\n", ++a);  //6?
}


// ++a   a=a+1