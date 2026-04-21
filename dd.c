#include<stdio.h>

int main(){
	int x,y,z;
	printf("Enter any three numbers:");
	scanf("%d %d %d", &x,&y,&z);
	if(x < z && x < z){
		printf("%d is smallest among them", x);
	}else if(y < x && y < z){
	   printf("%d is smallest among them", y);
	}
	else{
		printf("%d is smallest among them", z);
	}
	return 0;
}
