#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define maxSize 10
typedef  int QueueEntery;
typedef struct queue {
    int front;
    int rear;
    int size;
    QueueEntery arr[maxSize];

}Queue;

void initialize(Queue *pq);
void Apped(QueueEntery n , Queue *pq);
void Serve(QueueEntery *pe, Queue *pq);
int queueEmpty(Queue *pq);
int queueFull(Queue *pq);
int queueSize(Queue *pq);
void queueClear(Queue *pq);
void queuePrint(Queue *pq);



#endif // HEADER_H_INCLUDED
