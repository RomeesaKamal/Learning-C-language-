#include<stdio.h>

int identnumber(int n){
	if(n%2==0){
		printf("%d is even",n);
	}else{
		printf("%d is odd",n);
	}
	return n;
}

int main(){
	identnumber(5);
	return 0;
}
