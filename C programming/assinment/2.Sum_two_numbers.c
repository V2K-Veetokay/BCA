#include<stdio.h>

int a,b,sum;

void main(){
	printf("THIS PROGRAM ADD TWO INTEGERS \n\n");

    printf("Enter first number: \n");
    scanf("%d",&a);
    
    printf("Enter second number: \n");
    scanf("%d",&b);
    
    sum=a+b;
    printf("Sum of these number is %d",sum);
}