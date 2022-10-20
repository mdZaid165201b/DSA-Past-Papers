#include <iostream>
#include <cstring>
using namespace std;


// using recursion
int findk(int arr[],int left, int right){
    int middle = (left + right) / 2;
    if(arr[left] > arr[left+1]){
            cout<<endl<<"test :";
            return left+1;
    }
    if(arr[left] < arr[middle]){
         return findk(arr,middle,right);
    }
    else{
        
        return findk(arr,left,middle);
    }
}

int findk(int arr[], int size){
    return findk(arr,0,size);
}


// according to paper Function prototype 

int findk(int arr[], int size){
    int left = 0;
    int right = size;
    int middle = (left + right) / 2;
    while(arr[left] < arr[left + 1]){
        if(arr[left] < arr[middle]){
            left = middle;
            right = right;
        }
        else{
            left = left;
            right = middle;
        }
        middle = (left + right) / 2;
        
    }
    return left + 1;
}

int main()
{
    int arr[14] = {9,13,16,18,19,23,28,-1,0,1,2,5,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<findk(arr,size);
    return 0;
}
