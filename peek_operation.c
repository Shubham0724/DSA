#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int*arr;
};

int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int push(struct stack *ptr,int value)
{
    if(isfull(ptr))
    {
        printf("stack overflow cannot push\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("stack is underflow cannot pop.\n");
    }
    else{
        int value= ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int peek(struct stack* sp, int i){
    int arrayInd = sp->top-i+1;
    if(arrayInd<0){
        printf("Not a valid postion for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main()
{
    struct stack*s = (struct stack*)malloc(sizeof(struct stack));
    s->size=6;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));

    printf("stack = %d\n",isempty(s));
    printf("stack = %d\n",isfull(s));
    push(s,2);
    push(s,4);
    push(s,6);
    push(s,8);
    push(s,10);
    push(s,12);
    printf("stack = %d\n",isempty(s));
    printf("stack = %d\n",isfull(s));
    printf("%d\n",pop(s));
    printf("stack = %d\n",isempty(s));
    printf("stack = %d\n",isfull(s));
    return 0 ;

    for(int j =0;j < s->top+1;j++){
        printf("the value at index %d is %d",j,peek(s,j));
    }
}