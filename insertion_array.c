#include<stdio.h>

void display(int* arr, int n);
int insert (int arr[],int *usize,int isize,int element,int index);

int main(){
    int arr[100]={1,2,3,4,5,10};
    int usedsize=5;

    if(insert(arr,&usedsize,60,9,0)){
        printf("succesfully insert element.\n");

        display(arr,usedsize);
        }else{
            printf("failed to insert elements.");
        }
        return 0;
}

void display(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d\n",*(arr+i));
    }
}

int insert(int arr[],int * usize, int tsize, int element, int index){
    if(*(usize)>=tsize)
    return 0 ;

    for(int i=*(usize)-1;i>=index;i--){
        arr[i+1]=arr[i];

    }

    arr[index]=element;
    *(usize)+=1;
    return 1;
}