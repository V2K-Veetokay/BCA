#include<stdio.h>

int h,w,area,peri;

void main(){
    printf("THIS PROGRAM CALCULATES AREA AND PERIMETER OF A RECTANGLE \n\n");
    
    printf("Enter Hight: ");
    scanf("%d",&h);
    
    printf("Enter Width: ");
    scanf("%d",&w);
    
    area=h*w;
    peri=2*(h+w);
    
    printf("\nArea = %d \nAnd Perimeter = %d",area,peri);
}