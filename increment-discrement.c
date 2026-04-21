#include<stdio.h>

int main (){
	int a = 10,b = 100;
	printf("intial value: a = %d, b = %d\n", a,b);
	// After pre-increment
     printf("After pre-increment(++a): %d\n", ++a);
    //	post-increment: use 'a', then increase it
    printf("After post-increment(a++): %d\n", a++); 
	printf("Value of a after post-decrement : %d\n", a);
	//	After pre-decrement
    printf("After pre-increment(--b): %d\n", --b);
     //	post-decrement: use 'a', then increase it
    printf("After post-increment(b--): %d\n", b--);
	printf("Value of b after post-decrement : %d\n", b);

	return 0; 
}
