#include <iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
       if(arr[i]<min)
        min = arr[i];
    }
    return min;

}

int main() {
    
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    
    for(int i = 0; i<n; i++){
        cout << "Enter the value of arr[" << i << "] ";
        cin >> arr[i];
    } 
    cout << "Smallest Number is " << findMin(arr,n);
    
    return 0;
}
