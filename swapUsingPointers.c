#include<stdio.h>

void swap(int* ptr1,int* ptr2);

int main(){

    int a = 3;
    int b = 5;

     printf("The value of a  and b before swapping is a= %d, b= %d\n ",a,b);

     swap(&a,&b);

         printf("The value of a  and b after swapping is a= %d, b= %d\n ",a,b);

    
    return 0;
}

void swap(int* ptr1,int* ptr2) {
    int temp =0;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("The value of a  and b after swapping is a= %d, b= %d\n ",*ptr1,*ptr2);

}