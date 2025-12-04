#include<stdio.h>

char name;
int age;

void main(){
	printf("Tell me your name");
	scanf("%s",&name);
	printf("Tell me you age");
	scanf("%d",&age);
	printf("So, your are %c and your age is %d",name,age);
}

//only first letter of name is printing