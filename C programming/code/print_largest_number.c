#include<stdio.h>

int a, b, c, d;
int x = 0;
int main()
{
    printf("Enter four  numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = a;
    if (b>x) x=b;
    if (c>x) x=c;
    if (d>x) x=d;
    
    printf ("largest value is %d\n",x);
    return 0;
}
