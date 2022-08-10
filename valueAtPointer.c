#include<stdio.h>

int main(){
    int raanu = 18;
    int *ptr = &raanu;

    printf("%d\n",raanu);
    printf("%d\n",*ptr);
    printf("%d",*(&raanu));

    return 0;
}