#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    createNode() ;
    firstInsert(10) ;
    firstInsert(20) ;
    firstInsert(30) ;
    lastInsert(40) ;
    display() ;
    printf(" \n ///////////////////////////////////////// \n") ;
    firstDelete() ;
    lastDelete() ;
    lastDelete() ;
    lastDelete() ;
    display() ;
    printf("/////////////////////////////////////// \n") ;
    firstInsert(500) ;
    randomInsert(100 , 1) ;
    randomInsert(200 , 2) ;
    randomInsert(300 , 3) ;
    display() ;
    printf("\n ////////////////////////////////// \n") ;
    randomDelete(2) ;
    display() ;
    return 0;
}
