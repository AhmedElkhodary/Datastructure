#include "header.h"


void initialize(Queue *pq){

    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

void Apped(QueueEntery e , Queue *pq){
    pq->rear = (pq->rear +1) % maxSize;
    pq->arr[pq->rear] = e;
    pq->size++;


}

void Serve(QueueEntery *pe, Queue *pq){
    *pe = pq->arr[pq->front];
    pq->front = (pq->front + 1) % maxSize;
    pq->size++;
}

int queueEmpty(Queue *pq){
    return !pq->size;
}

int queueFull(Queue *pq){
    return (pq->size == maxSize);
}

int queueSize(Queue *pq){
    return pq->size;
}
void queueClear(Queue *pq){
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

void queuePrint(Queue *pq){
    int i = pq->front;
    while(i <= pq->rear){
        printf("%d", pq->arr[i]);
        i = (i+1) % maxSize;
    }
    printf("\n");
}

