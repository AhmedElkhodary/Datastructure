#include"header.h"

void initialize(Stack *ps){
	ps->top = 0;
}
bool stackFull(Stack *ps){
	return (ps->top == MAXSIZE) ;
}
bool stackempty(Stack *ps){
	return !(ps->top);
}
void push(int data, Stack *ps){
	ps->arr[ (ps->top)++ ] = data;
}
void pop (int *pe, Stack *ps){
	*pe = ps->arr[ --(ps->top)];
}
void stackTop(StackEntery *pe, Stack *ps){
	*pe = ps->arr[ (ps->top)-1 ];
}
void print(Stack *ps){
	int i = 0;
	printf("stack: ");
	while( i< ps->top ){
		printf("%d  ", ps->arr[i]);
		i++;
	}
	printf("\n");
}
void Display(StackEntery e ){
	printf("%d ", e);
}
void traverse(Stack *ps, void (*pd) ( StackEntery )){
	int i = 0;
	for( i= (ps->top); i > 0 ; i--){
		(*pd) (ps->arr[i-1]);
	}
}
