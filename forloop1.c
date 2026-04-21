#include<stdio.h>
//Q.No:01

//int main (){
//	int num;
//	for(num=100; num>0; num--){
//		printf("%d\n",num);
//	}
//}

//int main(){
//	int i,num1=0,num2 = 1,res,n;
//    printf("%d %d ", num1, num2);
//	for(i=0; i<n;i++){
//		res=num1+num2;
//		printf("%d  ",res);
//		num1=num2;
//		num2=res;
//	}
//	return 0;
//}

#include <stdio.h>

int main() {
    int i, j, n, prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        prime = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

