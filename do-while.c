//#include<stdio.h>

//int main (){
//	int num,sum=0,count=0;
//	float avg;
//	do{
//	printf("Enter an number until -1 = ");
//	scanf("%d",&num);
//	sum +=num;
//	count++;
//	}while(num != -1);
//	if(count>0){
//		avg = (float)sum/count;
//		printf("sum = %d\n",sum);
//		printf("Avg = %.2f\n",avg);
//	}
//}
//
//#include <stdio.h>
//
//int main() {
//    int num;
//
//    do {
//        printf("Enter a positive number: ");
//        scanf("%d", &num);
//    } while (num <= 0);
//
//    printf("You entered: %d\n", num);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int num,i=1,res;
//    long long f;
//    printf("Enter a  number: ");
//    scanf("%d", &num);
//    do {
//       res*=i;
//       i++;
//    } while (i <= num);
//
//    printf("%d! = %lld\n", num,res);
//    return 0;
//}


//#include <stdio.h>
//
//int main (){
//	int num,rev=0,i=1,rem;
//	printf("Enter a number = ");
//	scanf("%d",&num);
//	do{
//		rem = num % 10;
//	    rev = rev *10+rem;
//		num = num /10;
//	}while(num!=0);
//	printf("%d ",rev);
//}
//
//#include <stdio.h>
//
//int main() {
//    int x = 5;   // binary: 00000101
//
//    int result = x << 1;
//
//    printf("%d\n", result);
//    return 0;
//}

#include <stdio.h>

int main() {
    int x = 20;   // binary: 00010100

    int result = x >> 2;

    printf("%d\n", result);
    return 0;
}
