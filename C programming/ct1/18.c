#include<stdio.h>

int a,b,c,x;

void main(){
    printf("Enter three Numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    x = a;
    if (b > x) x = b;
    if (c > x) x = c;

    printf ("%d is the biggest value\n",x);
}
