/*
* List Array-based implementation
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    listType e;
    int p;
    List l;

    initialze(&l);
    insertlist(0,1,&l);       print( &l);
    insertlist(1,2,&l);       print( &l);
    insertlist(0,3,&l);       print( &l);
    insertlist(3,4,&l);       print( &l);
    del( 0 , &e, &l);         print( &l);
    del( 0 , &e, &l);         print( &l);
    insertlist(2,4,&l);       print( &l);
    insertlist(3,5,&l);       print( &l);
    insertlist(4,8,&l);       print( &l);
    insertlist(5,9,&l);       print( &l);

   // void (*fun_ptr) (listType) = &dis;
    traverseList(&l ,(&dis));
    return 0;
}
