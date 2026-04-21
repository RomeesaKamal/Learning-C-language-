#include<stdio.h>

int main (){
	char ch;
	printf("Enter the charachter :");
	scanf("%c", &ch);
	if((ch >= 'a' && ch <= 'z')  || (ch >= 'A' && ch <= 'Z')){
		printf("This is character");
	}else
	printf("This is not character");
}
