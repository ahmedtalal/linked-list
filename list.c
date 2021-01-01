#include "list.h"
#include <stddef.h>

node *head ;
void createNode(){
    head = NULL ;
}

int isEmpty(){
    if(head == NULL){
        return 0 ;
    }
    return 1 ;
}

void firstInsert(int value){
    node *ptr = (node*)malloc(sizeof(node));
    ptr->item = value ;
    if(isEmpty() == 0){
        head = ptr ;
        ptr->next = NULL ;
    }else {
        ptr->next = head ;
        head = ptr ;
    }
    printf("inserted \n") ;

}
void lastInsert(int value){
    node *ptr = (node*)malloc(sizeof(node)) ;
    ptr->item = value;
    if(isEmpty() == 0){
        head = ptr ;
        ptr->next = NULL ;
    }else {
        node *temp = head ;
        while(temp->next != NULL){
            temp = temp->next ;
        }
        temp->next = ptr ;
        ptr->next = NULL;
        temp = ptr ;
    }
    printf("inserted \n") ;
}
void firstDelete(){
    node *temp ;
    temp = head ;
    if(isEmpty() == 0){
        printf("the linked list is empty \n") ;
    }else {
        head = temp->next ;
        printf(" the first deleted item is %d \n" , temp->item) ;
        free(temp) ;
    }
}
void lastDelete(){
    node *temp , *ptr ;
    if(isEmpty() == 0){
        printf("the linked list is empty \n") ;
    }else if(head->next == NULL){
        printf("the last deleted item is %d \n" , head->item) ;
        head = NULL ;
        free(head) ;
    }else {
        temp = head ;
        while(temp->next != NULL){
            ptr = temp ;
            temp = temp->next ;
        }
        ptr->next = NULL ;
        printf("the last deleted item is %d \n" , temp->item) ;
        free(temp) ;
    }
}
void randomInsert(int value , int position){
    node *ptr = (node*)malloc(sizeof(node)) ;
    ptr->item = value ;
    node *temp = head ;
    if(isEmpty() == 0){
        if(position < 1){
            printf("\n the linked list is empty so the position must be equal 1 \n") ;
            return ;
        }else {
            head = ptr ;
            ptr->next = NULL ;
        }
    }else {
        for(int i = 1; i <position ; i++){
            temp = temp->next ;
            if(temp == NULL){
                printf("you can not insert \n") ;
                return ;
            }
        }
        ptr->next = temp->next ;
        temp->next = ptr ;
    }
    printf("inserted \n") ;
}
void randomDelete(int position){
    node *temp , *ptr ;
    if(isEmpty() == 0){
        printf("the linked list is empty \n") ;
    }else{
        temp = head ;
        for(int i = 1 ; i <position ; i++){
            ptr = temp ;
            temp = temp->next ;
            if(temp == NULL){
                printf("you can insert \n") ;
                return ;
            }
        }
        ptr->next = temp->next ;
        printf(" the random deleted item is %d \n " , temp->item) ;
        free(temp) ;
    }
}
void display(){
    node *temp ;
    if(isEmpty() == 0){
        printf("the linked list is empty \n") ;
    }else {
        temp = head ;
        while(temp != NULL){
            printf("%d \t" , temp->item) ;
            temp = temp->next ;
        }
    }
}
void clearList(){
    head = NULL ;
    printf("the linked list is cleared \n") ;
}
