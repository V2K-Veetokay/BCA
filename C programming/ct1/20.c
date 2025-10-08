#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Using ternary operator
    (marks >= 40) ? printf("pass\n") : printf("fail\n");

    return 0;
}
