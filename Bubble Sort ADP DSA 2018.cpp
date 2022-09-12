/*
    {2,1,7,3}
    After Bubble Sorting it will become {1 2 3 7} 
*/


#include <iostream>

using namespace std;

void bubbleSort(int arr[], int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print(int arr[], int length){
    for(int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[] = {2,1,7,3};
    int length = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,length);
    print(arr,length);
    return 0;
}
