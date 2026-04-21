#include<stdio.h>
//Q.NO:01
//int main (){
//	int i,j;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//Q.N0:02
//int main (){
//	int i,j;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}
//Q.NO:03
//int main (){
//	int i,j;
//	for(i=4;i>=1;i--){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//Q.NO:05
//int main (){
//	int i,j,k;
//	for(i=1;i<=4;i++){
//		for(k=3;k>=i;k--){
//			printf(" ");
//		}
//		for(j=1;j<=2*i-1;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//Q.no:06
int main (){
	char j;
	int i;
	for(i=1;i<=4;i++){
		for(j='A';j<'A'+i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
}
