#include <iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
       if(arr[i]>max)
        max = arr[i];
    }
    return max;

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
    cout << "Largest Number is " << findMax(arr,n);
    
    return 0;
}
