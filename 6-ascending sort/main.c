/*
*  accending sort
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void ascending (int a[]);
void print(int a[]);

int main()
{
    int i;
    int arr[SIZE]= {9,8,7,6,5,4,3,2,1,0};
   
    printf("Array before sorting:\n");
    for( i = 0; i < SIZE; i++ ){
    printf("%d,",arr[i]);    
    }    
	ascending (arr);
   
    printf("\n\nArray after sorting:\n");
    for( i = 0; i < SIZE; i++ ){
    printf("%d,",arr[i]);

    }
    scanf("%d");
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
