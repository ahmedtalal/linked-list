#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct Node {
    int item ;
    struct Node *next ;
}node ;

void createNode() ;
int isEmpty() ;
void firstInsert(int value) ;
void lastInsert(int value) ;
void firstDelete() ;
void lastDelete() ;
void randomInsert(int value , int position) ;
void randomDelete(int position) ;
void display() ;
void clearList() ;


#endif // LIST_H_INCLUDED
