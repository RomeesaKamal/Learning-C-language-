#include<stdio.h>

//Q.NO:01
//void greatestFnx(int a,int b, int c){
//	if((a>b)&&(a>c)){
//		printf("%d is greater among them",a);
//	}else if ((b>a)&&(b>c)){
//		printf("%d is greater among them",b);
//	}else{
//		printf("%d is greater among them",c);
//	}
//}
//
//int main (){
//	greatestFnx(4,8,2);
//}

//Q.NO:02

//int main (){
//int i=5;
//while(i--){
//   printf("%d ",i);
//}	
//}


//Q.NO:06
//int main (){
//int i=1;
//while(i++<5){
//   printf("%d ",i);
//}
//}

//Q.NO:07
//int main (){
//for(int i=0;i<5;i++){
//printf("Hello");	
//}
//	
//}

//Q.NO:08

//int main (){
//int i=3;
//while(i){
//   printf("%d",--i);
//}	
//}

//Q.NO:09

//int main (){
//int x=2;
//printf("%d %d %d", x, x++, ++x);
//}

int fib(int n){
	if(n==0){
		return 1;
	}else{
		return n * (n-1);
	}

}

int main (){
	printf("%d",fib(4));
}
