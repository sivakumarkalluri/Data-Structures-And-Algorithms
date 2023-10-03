#include <iostream>
using namespace std;

bool find(int arr[], int size, int k){
    for(int i = 0; i < size; i++){
        if(arr[i] == k)
            return true;
    }
    return false;

}

int main() {
    
    int n,value;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    
    for(int i = 0; i<n; i++){
        cout << "Enter the value of temp[" << i << "] ";
        cin >> arr[i];
    } 
    cout << "Enter the number to search : ";
    cin >> value;

    if(find(arr,n,value)) {
        cout << value << " is Found";

    }
    else {
        cout << value << " Not Found";

    }
    
    return 0;
}
