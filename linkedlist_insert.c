#include<stdio.h>
#include<stdlib.h>

struct node{
      int data;
      struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while(ptr !=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
} 

//case 1
struct node * insertatfirst(struct node *head, int data){
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data=data;

    ptr->next=head;
    return ptr;
}

//case2
struct node* insertatindex(struct node *head, int data, int index){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p=head;
    int i = 0;

    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//case 3
struct node * insertatend(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p = head;

    while(p->next!=NULL){
        p=p->next;
    }
    p->next = ptr;
    ptr->next=NULL;
    return head;
}


//case 4
struct node *insertafternode(struct node *head,struct node *prevnode, int data){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr-> data= data;

    ptr->next=prevnode->next;
    prevnode->next=ptr;

    return head;
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
     
    printf("Linked List before insertion\n"); 
    linkedlistTraversal(head);
    //head=insertatfirst(head,55);
    //head = insertatindex(head,55,2);
    //head=insertatend(head,55);
    head=insertafternode(head,second,45);
    printf("\nLinked List after insertion\n");
    linkedlistTraversal(head);
    
return 0;
}