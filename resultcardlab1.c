#include<stdio.h>
#include <stdlib.h>


int main (){
	int dis,cal,ict,isl,eng,phy;
	float gpd,gpc,gpi,gpt,gpe,gpp;
    char *lgd, *lgc, *lgi, *lge, *lgp, *lgt;
    float cgpa;
    //users marks
	printf("Enter ICT marks = ");
	scanf("%d",&ict);
	printf("Enter Functional English marks = ");
	scanf("%d",&eng);
	printf("Enter Islamic studies marks = ");
	scanf("%d",&isl);
	printf("Enter discrete marks = ");
	scanf("%d",&dis);
	printf("Enter calculus marks = ");
	scanf("%d",&cal);
	printf("Enter Applied Physics marks = ");
	scanf("%d",&phy);
	system("cls");

	//Header
	printf("\n\n\t\t\t\t\t\tStudent Result Card\n");
	printf("\n\tReg.No : FA25-BCE-O59\t\t\t\t\t\t");
	printf("Name : Romeesa Kamal\n");
	printf("\n\tSemester : FALL 2025\t\t\t\t\t\t");
	printf("Father Name : Kamal Khan\n");
	printf("\n\tProgram : BCE(Bachelor of Science in Computer Engineering\n\n)");
	
	
	// ICT marks
	
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
	
	//english
	
		
    if(eng>= 0 && eng<=100)
	{
	    if(eng >= 85)
		{
			lge = "A";
			gpe = 4.00;
		}
		else if(eng >= 80 && eng <= 84)
		{
			lge = "A-";
			gpe = 3.66;
		}
		else if(eng>=75 && eng<= 79)
		{
			lge = "B+";
			gpe = 3.33;
		}
		else if(eng>=70 && eng<= 74)
		{
			lge = "B";
			gpe = 3.00;
		}
		else if(eng>=65 && eng<= 69)
		{
			lge = "B-";
			gpe = 2.66;
		}
		else if(eng>=60 && eng<= 64)
		{
			lge = "C+";
			gpe = 2.33;
		}
		else if(eng>= 55 && eng<= 59){
			lge = "C";
			gpe = 2.00;
		}
		else if(eng >=50 && eng<= 54)
		{
			lge = "C-";
			gpe = 1.66;
		}
		else
		{
			lge = "F";
			gpe = 0.00;
		}
	}
	//islamic studies
	
    if(isl>= 0 && isl<=100){
		if(isl >= 85)
		{
			lgi = "A";
			gpi = 4.00;
		}
		else if(isl >= 80 && isl <= 84)
		{
			lgi = "A-";
			gpi = 3.66;
		}
		else if(isl>=75 && isl<= 79)
		{
			lgi = "B+";
			gpi = 3.33;
		}
		else if(isl>=70 && isl<= 74)
		{
			lgi = "B";
			gpi = 3.00;
		}
		else if(isl>=65 && isl<= 69)
		{
			lgi = "B-";
			gpi = 2.66;
		}
		else if(isl>=60 && isl<= 64)
		{
			lgi = "C+";
			gpi = 2.33;
		}
		else if(isl>= 55 && isl<= 59){
			lgi = "C";
			gpi = 2.00;
		}
		else if(isl >=50 && isl<= 54)
		{
			lgi = "C-";
			gpi = 1.66;
		}
		else
		{
			lgi = "F";
			gpi = 0.00;
		}
	}
// calculus

    if(cal>= 0 && cal<=100){
		if(cal >= 85)
		{
			lgc = "A";
			gpc = 4.00;
		}
		else if(cal >= 80 && cal <= 84)
		{
			lgc = "A-";
			gpc = 3.66;
		}
		else if(cal>=75 && cal<= 79)
		{
			lgc = "B+";
			gpc = 3.33;
		}
		else if(cal>=70 && cal<= 74)
		{
			lgc = "B";
			gpc = 3.00;
		}
		else if(cal>=65 && cal<= 69)
		{
			lgc = "B-";
			gpc = 2.66;
		}
		else if(cal>=60 && cal<= 64)
		{
			lgc = "C+";
			gpc= 2.33;
		}
		else if(cal>= 55 && cal<= 59){
			lgc = "C";
			gpc = 2.00;
		}
		else if(cal >=50 && cal<= 54)
		{
			lgc = "C-";
			gpc = 1.66;
		}
		else
		{
			lgc = "F";
			gpc = 0.00;
		}
	}
	
	//discrete
		
    if(dis>= 0 && dis<=100){
		if(dis >= 85)
		{
			lgd = "A";
			gpd = 4.00;
		}
		else if(dis >= 80 && dis <= 84)
		{
			lgd = "A-";
			gpd = 3.66;
		}
		else if(dis>=75 && dis<= 79)
		{
			lgd = "B+";
			gpd = 3.33;
		}
		else if(dis>=70 && dis<= 74)
		{
			lgd = "B";
			gpd = 3.00;
		}
		else if(dis>=65 && dis<= 69)
		{
			lgd = "B-";
			gpd = 2.66;
		}
		else if(dis>=60 && dis<= 64)
		{
			lgd = "C+";
			gpd = 2.33;
		}
		else if(dis>= 55 && dis<= 59){
			lgd = "C";
			gpd = 2.00;
		}
		else if(dis >=50 && dis<= 54)
		{
			lgd = "C-";
			gpd = 1.66;
		}
		else
		{
			lgd = "F";
			gpd = 0.00;
		}
	}
	
//		physics

    if(phy>= 0 && phy<=100){
		if(phy >= 85)
		{
			lgp = "A";
			gpp = 4.00;
		}
		else if(phy >= 80 && phy <= 84)
		{
			lgp = "A-";
			gpp = 3.66;
		}
		else if(phy>=75 && phy<= 79)
		{
			lgp = "B+";
			gpp = 3.33;
		}
		else if(phy>=70 && phy<= 74)
		{
			lgp = "B";
			gpp = 3.00;
		}
		else if(phy>=65 && phy<= 69)
		{
			lgp = "B-";
			gpp = 2.66;
		}
		else if(phy>=60 && phy<= 64)
		{
			lgp = "C+";
			gpp = 2.33;
		}
		else if(phy>= 55 && phy<= 59){
			lgp = "C";
			gpp = 2.00;
		}
		else if(phy >=50 && phy<= 54)
		{
			lgp = "C-";
			gpp = 1.66;
		}
		else
		{
			lgp = "F";
			gpp = 0.00;
		}
	}
	
	//result card 
	//ICT
	printf("\tCourse No\t\tCourse Title\t\t\t\tCredit\tMarks\tL.G\tG.P\n\n");
	printf("\tCSC101\t\tApllication of Information and Technology\t3\t");
	printf("%d\t",ict);
	printf("%s\t",lgt);
	printf("%.2f\n",gpt);
	//ENGLISH
	printf("\tHUM104\t\tFunctional English\t\t\t\t3\t");
	printf("%d\t",eng);
	printf("%s\t",lge);
	printf("%.2f\n",gpe);
	//ISLAMIC STUDIES
	printf("\tHUM112\t\tIslamic Studies\t\t\t\t\t2\t");
	printf("%d\t",isl);
	printf("%s\t",lgi);
	printf("%.2f\n",gpi);
	//CALULUS
	printf("\tMTH104\t\tCalculus and Analytical Geometry\t\t3\t");
	printf("%d\t",cal);
	printf("%s\t",lgc);
	printf("%.2f\n",gpc);
	//DISCRETE
	printf("\tMTH211\t\tDiscrete Mathematics\t\t\t\t3\t");
	printf("%d\t",dis);
	printf("%s\t",lgd);
	printf("%.2f\n",gpd);
	//PHYSICS
	printf("\tPHY124\t\tApplied Physics\t\t\t\t\t3\t");
	printf("%d\t",phy);
	printf("%s\t",lgp);
	printf("%.2f\n\n",gpp);
    
    cgpa = (gpd*3+gpc*3+gpi*2+gpt*3+gpp*3+gpe*3)/17;
    printf("\tCGPA:%.2f\n\n",cgpa);
    printf("\tScholactic Staus : GAS\n");
    getche();
	return 0;
}

