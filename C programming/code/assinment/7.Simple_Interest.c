#include<stdio.h>

float p,r,t,si;

void main(){
    printf("THIS PROGRAM CALCULATES SIMPLE INTEREST \n\n");
    
    printf("Enter Principal: ");
    scanf("%f",&p);
    printf("Enter Interest Rate: ");
    scanf("%f",&r);
    printf("Enter Time: ");
    scanf("%f",&t);
    
    si=(p*r*t)/100;
    
    printf("\nSimple Interest = %.2f",si);
}