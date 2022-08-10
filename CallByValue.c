#include<stdio.h>

void square(int n); // declaration

int main(){    // call by value
    int number =5;

    square(number);  // function call

    printf("The value of n is %d\n",number);
    
    return 0;
}

void square(int n){      // function defination
     
     n *= n;
     printf("The value of n is %d\n",n);

}