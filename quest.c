#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter three digits: ");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b && a>c){
		printf("%d is largest among these numbers",a);
	}else if(b>a && b>c){
	 	printf("%d is largest among these numbers",b);	
	}else
		printf("%d is largest among these numbers",c);
		return 0;
}
