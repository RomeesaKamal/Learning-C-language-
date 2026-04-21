#include<stdio.h>

int main(){
	int a;
	printf("Enter any number between 0 and 100 :");
	scanf("%d", &a);
	if(a < 55){
		printf("Fail");
	}else if(a >= 56 && a <= 65){
		printf("Unsatisfactory");
	}else{
		printf("Satisfactory");
	}
	return 0;
}




