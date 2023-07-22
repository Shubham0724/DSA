#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linkedlisttraveral(struct node * ptr)
{
    while (ptr !=NULL)
    {
        printf("Elements :%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;

    //allocation memory for nodes in the linked list in heap
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third  = (struct node *) malloc(sizeof(struct node));

    //link the first to second node
    head->data=7;
    head->next=second;

    //link the second and third node
    second->data=56;
    second->next=third;

    //terminate the list at the third node
    third->data=88;
    third->next=NULL;

    linkedlisttraveral(head);
    
return 0;
}