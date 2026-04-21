#include<stdio.h>

int main (){
	int a,b;
	printf("Enter a number :");
	scanf("%d %d", &a, &b);
	char symbol;
	scanf(" %c", &symbol);
	switch(symbol){
		case '+':
			printf(" %d ", a+ b);
			break;
		case '-':
				printf(" %d ", a-b);
				break;
		
			case '*':
				printf(" %d ", a*b);
				break;
			case '/':
				printf(" %d ", a/b);
				break;
			default:
					printf("invalid");
	}

}
