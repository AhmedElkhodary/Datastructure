/*
*  Queue Listed-based implementation
*
* created by Ahmed_Elkhodary
*/
#include"header.h"



int main()
{
    Queue q;
    QueueType e;
     initialize(&q);
     Apend( 1, &q);      print(&q);
     Apend( 2, &q);      print(&q);
     Apend( 3, &q);      print(&q);
     Serve(&e, &q);      print(&q);
     Serve(&e, &q);      print(&q);
     Serve(&e, &q);      print(&q);
     Apend( 3, &q);      print(&q);
    return 0;
}
