#include<stdio.h>

int main (){
	int x,y,res;
	char symbol;
	printf("Enter a number");
	scanf("%d",&x);
    printf("Enter 2nd number");
	scanf("%d",&y);
	printf("Enter a symbol");
	scanf(" %c",&symbol);
	
	if(symbol == '+')
	{
			res = x+y;
		printf("result  %d",res);
	}else if(symbol == '-')
	{
			res = x-y;
		printf("result  %d",res);
	}else if(symbol == '*')
	{
			res = x*y;
		printf("result  %d",res);
	}else
	{
		if(y == 0){
			printf("please enter another value");
		}else{
			res = x/y;
			printf("result %d",res);
			
		}
	}
	return 0;
}
