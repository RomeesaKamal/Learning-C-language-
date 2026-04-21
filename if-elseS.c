#include<stdio.h>

//int main(){
//	int a;
//	printf("Enter a value:");
//	scanf(" %d", &a);
//	if(a % 2 == 0){
//		printf("Number is even :%d",a);
//	}else
//	printf("Number is odd %d", a);
//	
//	return 0;
//}

//int main (){
//	int a,b,c;
//	printf("Enter the angles of traingle:");
//	scanf("%d %d %d", &a, &b, &c);
//	if(a+b+c== 180){
//		printf("This is valid traingle");
//	}else
//		printf("This is not valid traingle");
//		return 0;
//}

int main (){
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	if((ch >= 'a'&& ch <= 'z')||( ch >= 'A' && ch <= 'Z')){
		printf("%c is an alphabet . \n", ch);
    }else
	printf("%c is not alphabet. \n", ch);
	return 0;
}



