#include<stdio.h>
//Question.No:01
//int main (){
//	int a,b,c;
//	printf("Enter angle a =\n");
//	scanf("%d",&a);
//	printf("Enter angle a =\n");
//	scanf("%d",&b);
//	printf("Enter angle a =\n");
//	scanf("%d",&c);
//	
//	if((a<(b+c))&&(b<(c+a))&&(c<(b+a)))
//	{
//		printf("\nValid traingle");
//	}else{
//			printf("\nInvalid traingle");
//	}
//	return 0;
//}
// Question No:02
//int main (){
//	char ch;
//	printf("Enter any character = ");
//	scanf("%c",&ch);
//	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='U'||ch=='O'){
//		printf("%c is vowel\n",ch);
//	}else if((ch >= 'a' && ch <= 'z')||(ch>='A'&&ch<='Z')){
//		printf("%c is consonant\n");
//	}else{
//		printf("not a character\n");
//	}
//}


//Quetion No:03

//int main() {
//    char ch;
//
//    printf("Enter any character: ");
//    scanf("%c", &ch);
//
//    switch(ch) {
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'o':
//        case 'u':
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'O':
//        case 'U':
//            printf("%c is a vowel\n", ch);
//            break;
//
//        default:
//            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//                printf("%c is a consonant\n", ch);
//            } else {
//                printf("Not a character\n");
//            }
//    }
//
//    return 0;
//}


//Question:05

int main(){
	int marks;
	printf("\t\t\t\nRomeesa kamal\t\t\tFA25-BCE-059\n\n");
	printf("Enter a marks =");
	scanf("%d",&marks);
	switch(marks/10){
		case 10:
			if(marks==100){
				printf("A");
			}else{
				printf("invalid entry");
			}
			break;
		case 9:
			printf("A");
			break;
		case 8:
		    printf("B");
			break;
		case 7:
		printf("C");
		break;
		case 6:
		printf("D");
		break;
		case 5:
		case 4:
		printf("E");
		break;
		default:
			if(marks>100){
				printf("Invalid marks entry");
			}else{
				printf("F");	
			}
		
	}
}
