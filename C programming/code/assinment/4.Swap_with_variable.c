#include<stdio.h>

int a,b,c;

void main(){
	printf("THIS PROGRAM SWAP TWO NUMBERS \n\n");
	
    printf("Enter first number: \n");
    scanf("%d",&a);
    
    printf("Enter second number: \n");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    
    printf("Swap number are %d and %d",a,b);
}