/*
*  Stacks Array-based implementation
*
* created by Ahmed_Elkhodary
*/

#include<stdio.h>
#include"header.h"

void main(){
	Stack s;
    StackEntery e;
    StackEntery topvalue;
	initialize(&s);

	if(!stackFull(&s) ){

	   push( 0 , &s); print(&s);
	   push( 1 , &s); print(&s);
	   push( 2 , &s); print(&s);
	   push( 3 , &s); print(&s);
	   push( 4 , &s); print(&s);
	   push( 5 , &s); print(&s);

	   if(!stackFull(&s) )
	   push( 10 , &s); print(&s);
    }
	if(!stackempty(&s)){
	   pop(&e, &s );  print(&s);
	   pop(&e, &s );  print(&s);
	   pop(&e, &s );  print(&s);
    }

    if(!stackFull(&s)){
    	push(12, &s); print(&s);
	}
	if(!stackFull(&s))
	stackTop(&topvalue, &s);

	printf("\n\nTop value: %d\n", topvalue );
	printf("top intex: %d\n", s.top);
	printf("poped value: %d\n", e);

	printf("\n\ntravers stack: ");
	traverse( &s,  (&Display) );
	scanf("%d");

}





