#include<stdio.h>

int a,op,b;

void main(){
    printf("Enter the calculation in \"a + b\"\n");
    scanf("%d %c %d", &a, &op, &b);

    switch(op){
        case '+': printf("%d\n", a+b); break;
        case '-': printf("%d\n", a-b); break;
        case '*': printf("%d\n", a*b); break;
        case '/': {if (b == 0) printf("denominator can't be 0\n");
                   else printf("%d\n", a/b);
                  }
        break;
    }
}