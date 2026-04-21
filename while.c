#include<stdio.h>

//int main(){
//	int a = 1;
//	while (a <= 10){
//		printf("%d\n",a);
//		a++;
//	}
//}

//int main(){
//	for (int i=1; i<=10; i++ ){
//		printf("%d\n",i);
//	}
//}

//int main(){
//	int a = 0;
//	while (a<=10){
//		printf("%d\n",a);
//		a += 2;
//	}
//}

int main() {
    int n, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

}
