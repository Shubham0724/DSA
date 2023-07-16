#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *head){
    struct node *ptr = head;
    do{
        printf("element is %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

struct node *insertatfirst(struct node *head, int data){
    struct node* ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head->next;
    while(p->next !=head){
        p=p->next;
    }
    //at this point p point to the last node of this circular linked list

    p->next=ptr;
    ptr->next=head;
    head = ptr;
    return head; 
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //Allocate memory for node in the linked list in help
    head   = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third  = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    //link the first to second node
    head->data=4;
    head->next=second;

    //link the second and third node
    second->data=3;
    second->next=third;

    //link the third and fourth node
    third->data=6;
    third->next=fourth;

    //terminate the list at the third node
    fourth->data=1;
    fourth->next=head;

     printf("circular linked list before insertion\n");
    linkedlisttraversal(head);
    head=insertatfirst(head,54);
    printf("circular linked list after insertion\n");
    linkedlisttraversal(head);
    return 0;

}