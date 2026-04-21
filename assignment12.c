#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter the three angles of Traingle:");
	scanf("%d %d %d",&a ,&b,&c);
	if(a+b+c==180){
		printf("These angles are valid for a traingle");
	}else
		printf("These angles are not valid for a traingle");
	return 0;	
}
