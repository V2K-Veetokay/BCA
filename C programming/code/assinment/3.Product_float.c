#include<stdio.h>

float a,b,c;

void main(){
	printf("THIS PROGRAM MULTIPLY DECIMAL NUMBERS \n\n");
	
    printf("Enter first number: \n");
    scanf("%f",&a);
    
    printf("Enter second number: \n");
    scanf("%f",&b);
    
    c=a*b;
    printf("Sum of these number is %f",c);
}