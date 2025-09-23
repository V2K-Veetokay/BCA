#include<stdio.h>

int a,b;

void main(){
    printf("Enter a number\n");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("First value is %d and Second value %d\n",a,b);
}
