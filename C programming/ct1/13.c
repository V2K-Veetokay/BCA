#include<stdio.h>

int a,b;

void main(){
    printf("Enter Two numbers\n");
    scanf("%d %d", &a, &b);

    if (a > b) printf("%d is bigger\n", a);
    else if (b > a) printf("%d is bigger\n", b);
    else printf ("Both are Equal\n");
}
