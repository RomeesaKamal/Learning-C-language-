#include<stdio.h>

int main (){
	int numbers;
	printf("Enter your numbers:");
	scanf("%d", &numbers);
	if(numbers >= 85){
		printf("Grade A ");
	}else if(numbers >= 70 && numbers <80){
		printf("Grade B");
	}else if(numbers >= 50 && numbers < 70){
			printf("Grade C");
	}else{
			printf("Grade D");
	}
}
