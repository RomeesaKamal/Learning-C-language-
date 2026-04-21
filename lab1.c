#include<stdio.h>
#include<stdlib.h>


int main (){
	float sub1,sub2,sub3,sub4,sub5,perc;
	perc = (sub1+sub2+sub3+sub4+sub5)/5;
	printf("Enter Linear circuit analaysis marks = ");
	scanf("%.2f\n",&sub1);
	printf("Enter Linear Algebra marks =");
	scanf("%.2f\n",&sub2);	
	printf("Enter 21 century communication skills marks =");
	scanf("%.2f\n",&sub3);
	printf("Enter Idealogy  and Constitution of Pakisatn marks =");
	scanf("%.2f\n",&sub3);
	printf("Enter Programming Fundamentalmarks =");
	scanf("%.2f\n",&sub4);
	printf("Enter CAED marks =");
	scanf("%.2f\n",&sub5);
//	system("cls");
    printf("\n\n\t\t\t\t\t\tRESULT CARD\n\n\n");
    printf("\t\tName : XYZ\t\t\t");
    printf("\t\t\tReg.No : FA25-BCE-XXX\n\n");
    printf("\t\tSession : FALL-25\t\t\t");
    printf("\t\tSemester : 2nd\n\n");
    printf("\t\tSubjects\t\t\t\tTotal Marks\t\t\tObtained Marks\n\n");
    printf("\t\tLinear circuit analaysis\t\t\t100\t\t\t\t");
	printf("%.2f\n",sub1); 
    printf("\t\tLinear Algebra\t\t\t\t\t100\t\t\t\t");
	printf("%.2f\n",sub2); 
    printf("\t\t21 century communication skills\t\t\t100\t\t\t\t"); 
    printf("%.2f\n",sub3);
    printf("\t\tIdealogy  and Constitution of Pakisatn\t\t100\t\t\t\t");
	printf("%.2f\n",sub4); 
    printf("\t\tCAED\t\t\t\t\t\t100\t\t\t\t");
	printf("%.2f\n",sub5); 

	printf("\n\t\tPercentage = %.2f",perc);
	getche();
	return 0;
}
