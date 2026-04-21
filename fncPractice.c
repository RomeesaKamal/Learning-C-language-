#include<stdio.h>

int checkEven(int n){
    if(n % 2 == 0){
        printf("%d is even number", n);
    } else {
        printf("%d is odd number", n);
    }
    return 0;
}

int main(){
    checkEven(5);
}
