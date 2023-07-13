#include<stdio.h>

int linearseach(int arr[], int size, int element){
    for(int i=0;i<size;i++){
        if (arr[i]==element){
           return 1;
        }
    }
    return -1;
}


int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;

    //start searching  
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    //searching ends
    return -1;
}


int main(){
    //for binary search we need sorted array
    int arr[]={1,30,40,210,320,332,366,399,770};
    int size= sizeof(arr)/sizeof(int);
    int element = 770;
    int searchindex = binarysearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchindex);
    return 0;

}