#include<stdio.h>

int _square(int* n);

int main(){

    int n =4;
    _square(&n);

    printf("The value of n is %d\n",n);
    
    return 0;
}

int _square(int* n) {

    *n = *n * *n;
    printf("The value of n is %d\n",*n);
}