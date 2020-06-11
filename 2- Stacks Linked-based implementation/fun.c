
#include"header.h"

void initialize(Stack *ps){
	ps->top = NULL;
	ps->size=0;
}

bool stackFull(Stack*ps){
    return false;
}

bool stackempty(Stack *ps){
	return !(ps->top);
}


void push(int data, Stack *ps){
	StackNode *pn =(StackNode*)malloc(sizeof(StackNode));
	pn->data = data;
	pn->next = ps->top;
	ps->top = pn;
	ps->size++;
}


void pop (int *pe, Stack *ps){
	StackNode *pn = ps->top;
	*pe = pn->data;
	ps->top = pn->next;
	free(pn);
	ps->size--;
}

/*
void stackTop(StackEntery *pe, Stack *ps){
	*pe = ps->arr[ (ps->top)-1 ];
}
*/

void print(Stack *ps){
	StackNode *pn = ps->top;
	printf("stack: ");
	while(  pn != NULL ){
		printf("%d  ", pn->data);
		pn = pn->next;
	}
	printf(" Size: %d",ps->size);
	printf("\n");
}

void clearStack(Stack *ps){
   StackNode *pn = ps->top;

   while(pn){
    pn = pn->next;
    free(ps->top);
    ps->top = pn;
   }
    ps->size = 0;
}




void Display(StackEntery e ){
	printf("%d ", e);
}


void traverse(Stack *ps, void (*pd) ( StackEntery )){
  	/*StackNode *pn = ps->top;
	while(pn){
        (*pd) (pn->data);
         pn =pn->next;
	}
	*/
    for( StackNode *pn = ps->top; pn;  pn =pn->next )
        (*pd) (pn->data);

}

int size(Stack*ps){
    return ps->size;

}
