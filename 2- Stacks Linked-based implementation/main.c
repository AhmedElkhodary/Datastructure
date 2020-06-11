/*
*  Stacks Linked-based implementation
*
* created by Ahmed_Elkhodary
*/

#include<stdio.h>
#include"header.h"

void main(){

    StackEntery e;
	Stack s;
	initialize(&s);

	   push( 1 , &s);   print(&s);
	   push( 2 , &s);   print(&s);
	   push( 3 , &s);   print(&s);
	   push( 4 , &s);   print(&s);

       traverse(&s,&Display);


}




