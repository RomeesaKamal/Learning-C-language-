#include<stdio.h>

void add10(int n){
    n = n + 10;
    printf("Inside function: %d\n", n);
}

int main(){
    int x = 5;
    add10(x);
    printf("In main: %d", x);
    return 0;
}
