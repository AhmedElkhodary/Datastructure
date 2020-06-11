#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<stdbool.h>

typedef int StackEntery;
#define MAXSIZE 10

typedef struct stack{
	int top;
	StackEntery arr[MAXSIZE];

} Stack;


void initialize(Stack *);
bool stackFull(Stack *);
bool stackempty(Stack *);
void push(int data, Stack *);
void pop (int *, Stack *);
void stackTop(StackEntery *, Stack *);
void print(Stack *);
void traverse(Stack *, void (*) ( StackEntery));
void Display(StackEntery e );

#endif // HEADER_H_INCLUDED
