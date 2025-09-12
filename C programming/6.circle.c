#include<stdio.h>

float pi=3.14;
float radius,cir,area;

void main(){
    printf("THIS PROGRAM CALCULATES CIRCUMFERENCE AND AREA OF A CIRCLE \n\n");
    
    printf("Enter Radius: ");
    scanf("%f",&radius);
    
    cir=2*pi*radius;
    area=pi*radius*radius;
    
    printf("\nCircumference = %f \nAnd Area = %f",cir,area);
}

//How to define pi?