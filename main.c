/*
This program is created by:-
    Divy Koushik Mishra
    on:- 4/8/2020
    Version:- 1.0.0
*/
#include <stdio.h>

int main(){
    int reqNo;
    int a;
    printf("Enter the number whose multiplication table you want: ");
    scanf("%d", &reqNo);

    // Multiplication table start from here
    printf("%d X 1 = %d \n", reqNo, reqNo );
    printf("%d X 2 = %d \n", reqNo, reqNo*2 );
    printf("%d X 3 = %d \n", reqNo, reqNo*3 );
    printf("%d X 4 = %d \n", reqNo, reqNo*4 );
    printf("%d X 5 = %d \n", reqNo, reqNo*5 );
    printf("%d X 6 = %d \n", reqNo, reqNo*6 );
    printf("%d X 7 = %d \n", reqNo, reqNo*7 );
    printf("%d X 8 = %d \n", reqNo, reqNo*8 );
    printf("%d X 9 = %d \n", reqNo, reqNo*9 );
    printf("%d X 10 = %d \n", reqNo, reqNo*10 );

    printf("Do you wanna continue");
    scanf("%d", &a);

}