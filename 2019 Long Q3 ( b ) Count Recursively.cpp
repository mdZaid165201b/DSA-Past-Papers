
#include <iostream>

using namespace std;

int count(int *arr,int start,int end,int k){
    if(start < end){
        if(arr[start] == k){
            return 1 + count(arr,start+1,end,k);
        }
        else{
            return count(arr,start+1,end,k);
        }
    }
    else{
        return 1;
    }
}

int main()
{
     int arr[6] = {8,7,5,7,8,8,};
     cout<<count(arr,0,5,8);
    return 0;
}
