
#include<stdio.h>

//int main(){
//	int number,temp;
//	printf("\t\tZainab Asif                     FA25-BCE-022\n");
//	float result;
//	printf("Enter 1 for celicus to farenheight\n");
//	printf("Enter 2 for celicus to kelvin\n");
//    printf("Enter 3 for farenheight to  kelvin\n");
//    printf("Enter 4 for kelvin to calcius\n");
//	printf("Enter 5 for kelvin to farenheight\n");
//	printf("Enter 6 for farenheight to calcius\n");
//	printf("Enter your choice");
//	scanf("%d",&number);
//	printf("Enter your temperature");
//	scanf("%d",&temp);
//	if(number==1){
//		result = (temp*1.8)+32;
//		printf("the temperature from calcius to farenheight = %.2f",result);
//	}else if(number==2){
//		 result = temp+273.15;
//		 printf("the temperature from calcius to kelvin = %.2f",result);
//	}else if(number==3){
//		result=(temp-32)*(9/5)+273.15;
//		printf("the temperature from farenheight to kelvin = %.2f",result);
//	}else if(number==4){
//		result = temp-273.15;
//		printf("the temperature from  kelvin to celcius = %.2f",result);
//	}else if(number==5){
//		result = (temp-273.15)*(9/5)+273.15;
//		printf("the temperature from kelvin tofarenheight = %.2f",result);
//	}else {
//		result = (temp-32)/1.8;
//		printf("the temperature from farenheight to calcius = %.2f",result);
//	}
//   
//}
//
//
//int main(){
//	int upbound,k,sum;
//	printf("\t\tzainab asif                    FA25-BCE-022\n");
//printf("\nEnter the upper bound = ");
//scanf("%d",&upbound);
//if(upbound%2!=0){
//	k = (upbound+1)/2;
//	sum = k*k;
//	printf("%d",sum);
//}else{
//	printf("kindly enter odd number ");
//}
//}


//int main(){
//	int num;
//	printf("\t\tRomeesa kamal                     FA25-BCE-059\n");
//	printf("\nEnter a number:");
//	scanf("%d",&num);
//	if(num%2==0){
//		printf("%d is even number",num);
//	}else{
//		 printf("%d is odd number",num);
//	}
//   
//}
//int main(){
//	int num;
//	printf("\t\tRomeesa kamal                     FA25-BCE-059\n");
//	printf("\nEnter a number:");
//	scanf("%d",&num);
//	if(num>10){
//		printf("%d is greater than 10",num);
//	}else{
//		 printf("%d is less than 10",num);
//	}
//   
//}



int main() {
    int marks;
    printf("\t\tzainab asif                    FA25-BCE-022\n");
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 85) {
        printf("A\n");
    }
    else if (marks >= 80 && marks <= 84) {
        printf("A-\n");
    }
    else if (marks >= 75 && marks <= 79) {
        printf("B+\n");
    }
    else if (marks >= 70 && marks <= 74) {
        printf("B\n");
    }
    else if (marks >= 65 && marks <= 69) {
        printf("B-\n");
    }
    else if (marks >= 60 && marks <= 64) {
        printf("C\n");
    }
    else if (marks >= 55 && marks <= 59) {
        printf("C-\n");
    }
    else {
        printf("D\n");
    }

    return 0;
}



