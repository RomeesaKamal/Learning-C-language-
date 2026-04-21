#include<stdio.h>

//int main(){
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=6-i;j>=1;j--){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        next *= i;
        a = b;
        b = next;
    }

    return 0;
}
