#include <stdio.h>

int main (){
	int ict;
	char *lgt;
	float gpt;
	printf("Enter ICT marks = ");
	scanf("%d",&ict);
	
	if(ict >= 0 && ict <= 100){
		if(ict >= 85)
		{
			lgt = "A";
			gpt = 4.00;
		}
		else if(ict >= 80 && ict <= 84)
		{
			lgt = "A-";
			gpt = 3.66;
		}
		else if(ict>=75 && ict<= 79)
		{
			lgt = "B+";
			gpt = 3.33;
		}
		else if(ict>=70 && ict<= 74)
		{
			lgt = "B";
			gpt = 3.00;
		}
		else if(ict>=65 && ict<= 69)
		{
			lgt = "B-";
			gpt = 2.66;
		}
		else if(ict>=60 && ict<= 64)
		{
			lgt = "C+";
			gpt = 2.33;
		}
		else if(ict>= 55 && ict<= 59){
			lgt = "C";
			gpt = 2.00;
		}
		else if(ict >=50 && ict<= 54)
		{
			lgt = "C-";
			gpt = 1.66;
		}
		else
		{
			lgt = "F";
			gpt = 0.00;
		}
	}
	printf("%f",gpt);
	printf("%s",lgt);
}
	
	
