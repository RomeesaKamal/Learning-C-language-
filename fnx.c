#include<stdio.h>

void evenOdd(int a, int b){
    if(a % 2 == 0){
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }

    if(b % 2 == 0){
        printf("%d is even\n", b);
    } else {
        printf("%d is odd\n", b);
    }
}

int main (){
    evenOdd(9,5);
    return 0;
}
