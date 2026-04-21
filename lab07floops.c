#include<stdio.h>


//Q.NO:01
//While loop
//int main(){
// printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int num,i=1;
//	printf("Enter a number =");
//	scanf("%d",&num);
//	printf("Numbers from 1 to %d are:\n", num);
//	while(i<=num){
//	printf("%d ",i);
//	i++;
//	}
//
//	return 0;
//}

//for loop
//int main(){
// printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int num,i;
//	printf("Enter a number =");
//	scanf("%d",&num);
//	printf("Numbers from 1 to %d are:\n", num);
//    for(i = 1; i <= num; i++) {
//	printf("%d ",i);
//	}
//
//	return 0;
//}

//do while loop

//int main(){
// printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int num,i=1;
//	printf("Enter a number =");
//	scanf("%d",&num);
//	printf("Numbers from 1 to %d are:\n", num);
//  
//    	do{
//    			printf("%d ",i);
//    			i++;
//		}while(i<=num);
//      return 0;
//}



//Q.No:02
//While loop
//int main() {
//    int num, i = 1;
//    printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//    printf("Enter a number = ");
//    scanf("%d", &num);
//
//    printf("\nEven numbers are:\n");
//    i = 1;
//    while(i <= num) {
//        if(i % 2 == 0) {
//            printf("%d ", i);
//        }
//        i++;
//    }
//
//    printf("\n\nOdd numbers are:\n");
//    i = 1;
//    while(i <= num) {
//        if(i % 2 != 0) {
//            printf("%d ", i);
//        }
//i++;
//}
// return 0;
//}

//for loop

//int main() {
//   int num, i = 1;
//  printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//    printf("Enter a number = ");
//    scanf("%d", &num);
//
//  printf("\nEven numbers are:\n");
//
//    for( i = 1;i <= num;i++) {
//        if(i % 2 == 0) {
//           printf("%d ", i);
//      }
//
//   }
//
//   printf("\n\nOdd numbers are:\n");
//  for(i = 1;i <= num;i++) {
//       if(i % 2 != 0) {
//           printf("%d ", i);
//       }
//    }
//    return 0;
//}

//do while loop

//int main() {
//    int num, i = 1;
//    printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//    printf("Enter a number = ");
//    scanf("%d", &num);
//
//    printf("\nEven numbers are:\n");
//    i = 1;
//    do{
//        if(i % 2 == 0) {
//            printf("%d ", i);
//        }
//        i++;
//    }while(i <= num);
//
//    printf("\n\nOdd numbers are:\n");
//    i = 1;
//     do{
//        if(i % 2 != 0) {
//            printf("%d ", i);
//        }
//        i++;
//    }while(i <= num);
//
//    return 0;
//}

//Q.No:03

//for loop
//int main (){
//	char c;
// printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	printf("Alphabtes are :");
//	for(c='a';c<='z';c++){
//		printf("%c ",c);
//	}
//}

//while loop
//int main (){
//	char c='a';
//	printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	printf("Alphabtes are :\n");
//	while(c<='z'){
//		printf("%c ",c);
//		c++;
//	}
//}

//do while loop
//int main (){
//	char c='a';
//	printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	printf("Alphabtes are :\n");
//	do{
//		printf("%c ",c);
//		c++;
//	}while(c<='z');
//}


//Q.No:04

//for loop

//int main (){
//	printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int num,i,res;
//	printf("Enter a numer =");
//	scanf("%d",&num);
//	for(i=1;i<=10;i++){
//		res = num*i;
//		printf("%d x %d = %d\n",num,i,res);
//	}
//	return 0;
//}

//while loop

//int main (){
//	printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int num,i=1,res;
//	printf("Enter a numer =");
//	scanf("%d",&num);
//	while(i<=10){
//		res = num*i;
//		printf("%d x %d = %d\n",num,i,res);
//		i++;
//	}
//	return 0;
//}

//do while loop

//int main (){
//	printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int num,i=1,res;
//	printf("Enter a numer =");
//	scanf("%d",&num);
//    do{
//		res = num*i;
//		printf("%d x %d = %d\n",num,i,res);
//		i++;
//	}while(i<=10);
//	return 0;
//}

//Q.No:05

//for loop
//int main (){
//	printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int i,sum=1;
//  for(i=1;i<=10;i++){
//  if(i%2!=0){
//	sum = sum*i;
//	}
//}
//		printf("Product of odd numbers from 1 to 10 is = %d", sum);
//}

//Q.No:06

//int main(){
//	printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//	int i,n,sum=0;
//	printf("Enter a number =");
//	scanf("%d",&n);
//	
//	 for(i = 1; i <= n; i++) {
//        sum = sum + (i * i);   // add square of i
//    }
//
//    printf("Sum of squares from 1 to %d is = %d", n, sum);
//
//    return 0;
//	
//}

//Q.No:07

//int main() {
//    printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
//
//    int count = 0, n, temp;
//
//    printf("Enter a number = ");
//    scanf("%d", &n);
//
//    temp = n;  // store original number
//
//     do{
//        temp = temp / 10;  // remove last digit
//        count++;
//    }while (temp != 0);
//
//    printf("Digits in %d is = %d", n, count);
//
//    return 0;
//}

//Q.No:08
int main() {
    printf("\n\nRomeesa kamal\t\t\tFA250BCE-059\n\n");
    int n, reverse = 0, r;

    printf("Enter a number = ");
    scanf("%d", &n);

    while (n != 0) {
        r = n % 10;          // get last digit
        reverse = reverse * 10 + r;  // build reversed number
        n = n / 10;                 // remove last digit
    }

    printf("Reversed number = %d", reverse);

    return 0;
}


