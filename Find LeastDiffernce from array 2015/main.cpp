#include <iostream>
using namespace std;

void sort(int arr[] , int len){
    for(int i = 0 ; i < (len - 1) ; i++){
        for(int j = 0 ; j < (len - 1) ; j++){
            if(arr[j] > arr[j+1]){ // replace > with < to make descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int findLeastDifference(int arr[] , int len){
    int least = arr[1]-arr[0];
    for(int i = 0 ; i < len - 1 ; i++){
        int temp = arr[i + 1] - arr[i];
        if (temp < least){
            least = temp;
        }
    }
    return least;
}

void print(int arr[] , int len){
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {2,5,21,15,7,19,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr,len);
    print(arr,len);
    cout << "Least Diff : " << findLeastDifference(arr,len) << endl;

    return 0;
}
