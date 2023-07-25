#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    while(ptr !=NULL){
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int isempty(struct node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int  isfull(struct node *top){
    struct node* p= (struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node* push(struct node* top, int x){
    if(isfull(top)){
        printf("stack overflow\n");
    }
    else{
        struct node* n= (struct node*) malloc(sizeof(struct node));
        n->data=x;
        n->next = top;
        top=n;
        return top;

    }
}

int pop(struct node** top){
    if(isempty(*top)){
        printf("stack underflow\n");
    }
    else{
        struct node* n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;
    }
}

int main(){
    struct node * top=NULL;

    top=push(top,8);
    top=push(top,9);
    top=push(top,10);
    int element = pop(&top);
    printf("popped element is %d\n",element);
    linkedlisttraversal(top);
    return 0;
}