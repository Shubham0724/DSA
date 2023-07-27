#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack* ptr){
    if (ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
};


void push(struct stack* ptr, int val){
    if(isfull(ptr)){
        printf("stack overflow! cannot push %d to the stack/n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

void pop(struct stack* ptr){
    if(isfull(ptr)){
        printf("stack underflow! cannot pop to the stack/n");
    }
    else{
        int val = ptr ->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp,int i){
    int arrayind=sp->top-i+1;
    if(arrayind<0){
        printf("not a valid position for the stack\n");
        return -1;
    }else{
        return sp->arr[arrayind];
    }
}

int stacktop(struct stack* sp)
{
    return sp->arr[sp->top];
};

int stackbottom(struct stack* sp){
    return sp->arr[0];
}


int main(){
    struct  stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr=(int *) malloc(sp->size * sizeof(int));
    printf("stack has been created successfully\n");
    printf("before pushing, full: %d\n",isfull(sp));
    printf("before pushing, empty: %d\n", isempty(sp));

    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    push(sp,6);
    push(sp,7);
    push(sp,8);
    push(sp,9);
    push(sp,10);
    
    // for(int j=1;j<=sp->top+1;j++)
    // {
    //     printf("the value at position %d is %d\n", j, peek(sp,j));
    // }

    printf("the top most value of this stack is %d\n",stacktop(sp));
    printf("the bottom most vlue of this stack is %d\n", stackbottom(sp));


    return 0;

    

}