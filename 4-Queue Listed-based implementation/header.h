#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef int QueueType;
typedef struct queuenode{
    int data;
    struct queuenode *next;
}QueueNode;

typedef struct queue{
    struct QueueNode *front;
    struct QueueNode *rear;
    int size;
}Queue;


void initialize(Queue *);
int Apend(QueueType, Queue *);
void print(Queue *);
void Serve(QueueType *, Queue *);
#endif // HEADER_H_INCLUDED
