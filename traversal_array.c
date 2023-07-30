#include<stdio.h>

void show (int arr[], int n){
    for(int  i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}

int main(){
    int arr[100]={2,3,4,5,6};
    show(arr,10);
    return 0;
}