#include<stdio.h>

int main(){
int a =7, b =12, c=8;
printf("a=%d,b=%d,c=%d\n",a ,b,c);
a = b-c;
a++;
++b;
c--;
--a;
a+=2;
b = -3;
c/=2;

printf("a=%d,b=%d,c=%d\n",a++ ,b+1,--c);
printf("a=%d,b=%d,c=%d\n",a ,b,c);


}
