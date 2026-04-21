#include<stdio.h>

int main (){
	int marks;
	printf("Enter your marks:");
	scanf("%d", &marks);
	if(marks >= 85){
		printf("Grade A");
	}else if(marks >= 80 && marks <= 84 ){
		printf("Grade A-");
    }else if(marks >= 75 && marks <= 79 ){
		printf("Grade B+");
	}else if(marks >= 70 && marks <= 74 ){
		printf("Grade B");
	}else if(marks >= 65 && marks <= 69 ){
		printf("Grade B-");
	}else if(marks >= 60 && marks <= 64 ){
		printf("Grade C+");
	}else if(marks >= 55 && marks <= 59 ){
		printf("Grade C-");
	}else
	printf("Grade D");
}
