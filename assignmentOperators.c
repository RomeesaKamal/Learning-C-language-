#include<stdio.h>

int main ()
{
	int a = 10, b = 5;
	printf("initial values: a = %d, b = %d\n", a,b);
    //	Basic Assignment
    a = b;
    printf("After a = b: a=%d\n", a);
//    Add and assign
    a += b;
    printf("After a += b: a=%d\n", a);
//    Subtarct and assign
    a -= b;
    printf("After a -= b: a=%d\n", a);
//    Multiply and assign
    a *= b;
    printf("After a *= b: a=%d\n", a);
//    Divide and assign
   a /= b;
    printf("After a /= b: a=%d\n", a);
//    Modulud and assign
   a %= b;
    printf("After a %= b: a=%d\n", a);
    
    
    
}
