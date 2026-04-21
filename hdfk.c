#include<stdio.h>

//int fib(int n){
//	if(n==0){
//		return 1;
//	}else{
//		return n * fib(n-1);
//	}
//}
//
//int main (){
//	printf("5! = %d",fib(5));
//	return 0;
//}

//int sum (int n){
//	if(n==0){
//		return 0;
//	}else{
//	return	n%10 + sum (n/10);
//	}
//}
//
//int main (){
//	printf("%d",sum(1234));
//}


//int getFive() 
//{
//    return 5;
//}
//
//int main() 
//{
//    int x = getFive();
//    printf("Returned value: %d\n", x);
//    return 0;
//}


//
//float add(float a, float b);
//int main() {
//    float num1, num2, result;
//    printf("Enter first number: ");
//    scanf("%f", &num1);
//    printf("Enter second number: ");
//    scanf("%f", &num2);
//    result = add(num1, num2);
//    printf("Result: %.2f\n", result);
//return 0;}
//float add(float a, float b) {
//   float r=0;
//   r=a+b;
//   return r;
//   }



void countDigits(int num)
{
    int digit, total = 0, even = 0, odd = 0;

    while (num != 0)
    {
        digit = num % 10;  // get last digit
        total++;

        if (digit % 2 == 0)
            even++;
        else
            odd++;

        num = num / 10;  // remove last digit
    }

    printf("Total digits = %d\n", total);
    printf("Even digits = %d\n", even);
    printf("Odd digits = %d\n", odd);
}
int main()
{
    countDigits(12345);

    return 0;
}
