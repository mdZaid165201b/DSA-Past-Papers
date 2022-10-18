
#include <iostream>

using namespace std;


bool isMaxHeap(int arr[], int len){
    for(int i = 0; i < len; i++){
        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;
        if(leftChild < len && rightChild < len){
            if(arr[leftChild] > arr[i] && arr[rightChild] > arr[i]){ return false; }
        }
    }
    return true;
}


int main()
{
    cout<<"isMaxHeap function";
    return 0;
}
