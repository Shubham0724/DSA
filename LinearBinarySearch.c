#include<stdio.h>

int linearseach(int arr[], int size, int element){
    for(int i=0;i<size;i++){
        if (arr[i]==element){
           return 1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,3,4,21,32,22,3,3,21,32,90};
    int size= sizeof(arr)/sizeof(int);
    int element = 9;
    int searchindex = linearseach(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchindex);
    return 0;

}