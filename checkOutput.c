#include<stdio.h>

int main (){
	int a = 5, b = 10, c = 15;
	printf("initial values : a = %d, b = %d, c = %d \n", a, b, c);
	a++;
	++b;
	c--;
	--a;
	a += 2;
	b -= 3;
	c *= 2;
	printf("a = %d", a);
	printf("final values: \n");
	printf(" a = %d, b = %d, c = %d \n", a++, --b, c+5);
	printf(" a = %d, b = %d, c = %d \n", a,b,c);
	return 0;
}
