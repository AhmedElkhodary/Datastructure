/*
* sequential seaech algorithm
*
*  created by Ahmed_Elkhodary
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int sequentialSort (int, int *);


int main()
{
    int i,num;
    int arr[SIZE]= {9,8,7,6,5,4,3,2,1,0};

    printf("Please enter a number: ");
    scanf("%d",&num);
    int r = sequentialSort(num, arr);
    (r == -1)? printf("the number not exist"): printf("%d",r);
    scanf("%d");
	return 0;
}

int sequentialSort (int a, int *arr){
       int i;

        for(i= 0; i<SIZE;i++){
            if (arr[i] == a)
            return arr[i];

        }
        return -1;

}
