/*
* Binary Search algorithm
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void ascending (int []);
int  binarySearch( int , int []);

int main()
{
    int i;
    int arr[SIZE]= {9,8,7,6,5,14,3,2,1,78};
    ascending (arr);

    for( i = 0; i < SIZE; i++ ){
    printf("%d,",arr[i]);

    }

    int r = binarySearch(7, arr);
    (r == -1)? printf("\nthe number not exist")  : printf("\nINDEX:%d",r);
    return 0;
}





void ascending (int arr[]){
       int i ,j,temp;
        for(j = 0; j < SIZE; j++ ){
        for(i= 0; i<SIZE-1;i++){
            if(arr[i] > arr[i+1]){
               temp = arr[i+1];
               arr[i+1] = arr[i];
               arr[i] = temp;
           }
         }
      }
}

int binarySearch(int e, int a[] ){
    int bottom, top , middle;
    bottom = 0 ;
    top = SIZE-1;

    while(top >= bottom){
            middle = (top + bottom ) / 2;
            if(e == a[middle])
                return middle;
            else if(e < a[middle]){
                top = middle-1;
            }
            else
                bottom = middle+1;


    }
    return -1;




}
