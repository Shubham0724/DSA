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

//case 1: Deleting the first element from the linked list
struct node* deletefirst(struct node *head){
    struct node* ptr =head;
    head=head->next;
    free(ptr);
    return head;
}

//case 2: deleting the element at the given index from the linked list
struct node * deleteatindex(struct node *head, int index){
    struct node *p = head;
    struct node *q = head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }

    p->next = q->next;
    free(q);
    return head;
} 

//case 3: deleting the last element
struct node* deleteatlast(struct node*head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next !=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//case 4: deleting the element with a given value from the linked list
struct node* deleteelementatindex(struct node * head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
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

    printf("linked list before deletion\n");
    linkedlisttraveral(head);

    //head=deletefirst(head); //for deleting first element of the linked list
    //head=deleteatindex(head,1);
    head=deleteatlast(head);
    

    printf("linked list after deletion\n");
    linkedlisttraveral(head);
    
return 0;
}