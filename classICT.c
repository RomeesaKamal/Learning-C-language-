#include<stdio.h>

//int main (){
//	int a,b;
//	printf("Enter two integers: ");
//	scanf("%d %d", &a,&b);
//	printf("You enterd %d and %d ", a,b);
//}

int main(){
	int a,b;
	char d , e;
	printf("Enter the integer and characters: ");
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%c", &c1);
//	scanf("%c", &c2);
    scanf("%d %d ", &a, &b);
    printf("You entered : %d ", a);
    scanf("%c %c ", &d, e);
    printf("You entered %c and %c", &d, &e);
	return 0;
}
