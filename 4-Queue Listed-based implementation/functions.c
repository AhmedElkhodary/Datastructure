#include"header.h"


void initialize(Queue *pq){
    pq->front = NULL;
    pq->rear  = NULL;
    pq->size  = 0;
}

int Apend(QueueType e, Queue *pq){
    QueueNode *ppn,*pn = (QueueNode*)malloc(sizeof(QueueNode));
    if (!pn)
        return 0;
    else{
        pn->data = e;
        pn->next = NULL;
        if (!pq->rear)
            pq->front= pn;
        else{
            ppn = pq->rear;
            ppn->next = pn;
        }
        pq->rear= pn;
        pq->size++;
        return 1;

    }
}

void Serve(QueueType *pe, Queue *pq){
    if(pq->front){
          QueueNode *pn = pq->front;
          *pe = pn->data;
          pq->front = pn->next;
          free(pn);
          if(!pq->front)
            pq->rear = NULL;
          pq->size--;
    }
}


void print(Queue *pq){
    QueueNode*pn;
    pn = pq->front;
    while(pn != NULL){
        printf("%d ",pn->data);
        pn = pn->next;
    }
    printf("\n");

}
