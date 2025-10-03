#include<stdio.h>
#include<conio.h>
#define SIZE1 4
#define SIZE2 6

int main(){
    int arr1[SIZE1+SIZE2] = {1,2,3,4};
    int arr2[SIZE2] = {5,6,7,8,9,10};

    for ( int i = 0; i <SIZE2; i++){
        arr1[SIZE1 + i ] = arr2[i];

    }

    for ( int i = 0; i <SIZE1+SIZE2; i++){
        printf(" %d  " , arr1[i]);

    }

   return 0;

}    