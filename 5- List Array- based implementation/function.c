#include "header.h"

void initialze(List *pl){
    pl->size= 0;
}

void insertlist(int p, listType e, List *pl){
    int i ;
    for(i =pl->size-1 ; i>=p; i-- ){
        pl->arr[i+1] = pl->arr[i];
    }
    pl->arr[p] = e;
    pl->size++;
}

void print(List *pl){
    int i = 0;
    while(i < pl->size){
        printf("%d ",pl->arr[i]);
        i++;
    }
    printf("    s: %d",pl->size);
    printf("\n");
}

void del(int p , listType *pe, List *pl){
    int i;
    *pe = pl->arr[p];
    for(i = p; i<pl->size; i++ ){
        pl->arr[i] = pl->arr[i+1];
    }
    pl->size--;
}

void traverseList(List *pl, void (*fun_ptr)(listType)){
    int i ;
    for(i = pl->size-1; i >= 0; i--){
        (fun_ptr) (pl->arr[i]);
    }
}

void dis(listType e){
    printf("%d ",e );
}

