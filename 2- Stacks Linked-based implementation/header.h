#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<stdbool.h>
#include<stdlib.h>

typedef int StackEntery;

typedef struct stacktnode{
    StackEntery data;
    struct stacktnode *next;


}StackNode;

typedef struct stack{
	 struct stack *top;
	 int size;
} Stack;


void initialize(Stack *);
bool stackempty(Stack *);
void push(int data, Stack *);
void pop (int *, Stack *);
void print(Stack *);
void clearStack(Stack *);
int size(Stack*ps);

void stackTop(StackEntery *, Stack *);
void traverse(Stack *, void (*) ( StackEntery));
void Display(StackEntery e );
#endif // HEADER_H_INCLUDED
