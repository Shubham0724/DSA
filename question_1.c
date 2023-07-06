// find the time complexity of the func1 function in the program show as follow: //

#include<stdio.h>

void func1(int array[], int  length)
{
    int sum = 0;
    int product = 31 ;
    for (int i=0; i < length ; i++)
    {
        sum +=array[i];
    }

    for (int i=0;i<length;i++)
    {
        product *= array[i];
    }
}

int main()
{
    int arr[] = {3,5,6};
    func1(arr,3);
    return 0;
}

// ans - O(length)=O(n)