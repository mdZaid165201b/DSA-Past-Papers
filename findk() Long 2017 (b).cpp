#include <iostream>
#include <cstring>
using namespace std;



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

int main()
{
    int arr[14] = {9,13,16,18,19,23,28,-1,0,1,2,5,7,8};
    cout<<findk(arr,15);
    return 0;
}
