
#include <iostream>

using namespace std;
int findMax(int arr[], int index, int max, int len){
    if(index >= len){
        //cout<<"max: "<<max;
        return max; 
    }
    else{
        if(arr[index] > max){
            int prevIndex = index;
            return findMax(arr, ++index, arr[prevIndex], len);
        }
        else{
            return findMax(arr, ++index, max, len);
        }
    }
}

int main()
{
    int arr[5] = {2,3,5,9,0};
    cout<<"Max: "<<findMax(arr,0,arr[0],5);

    return 0;
}
