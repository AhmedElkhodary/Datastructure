/*
*  Queue Array-based implementation
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    QueueEntery e;
    Queue q;
    initialize(&q);

    Apped(1 , &q);  queuePrint(&q);
    Apped(2 , &q);  queuePrint(&q);
    Apped(3 , &q);  queuePrint(&q);
    Serve(&e, &q);  queuePrint(&q);
    Apped(4 , &q);  queuePrint(&q);
    Apped(5 , &q);  queuePrint(&q);
    return 0;
}
