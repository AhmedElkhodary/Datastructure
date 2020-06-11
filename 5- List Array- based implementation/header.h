#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define MAXSIZE 10
typedef int listType;

typedef struct listt{
    listType arr[MAXSIZE];
    listType size;
}List;



void initialze(List *);
void insertlist(int , listType , List *);
void print(List *);
void del(int  , listType *, List *);
void traverseList(List *, void (*)(listType));
void dis(listType );

#endif // HEADER_H_INCLUDED
