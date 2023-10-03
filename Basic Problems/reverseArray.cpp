#include <iostream>
#include<limits.h>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <=  end) {

        swap(arr[start],arr[end]);

        start++;
        end--;
    } 

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
    
    reverseArray(arr,n);

    cout << " ******** After reversing ******** " <<endl;
    
     for(int i = 0; i<n; i++){
        cout << arr[i] <<endl;
        
    } 
    return 0;
}
