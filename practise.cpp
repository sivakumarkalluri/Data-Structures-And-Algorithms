#include <iostream>
using namespace std;

int fun(int arr[],int size){

    arr[0] += 30;
}
int main() {
    int arr[]={10,20};

    fun(arr,2);
    // cout << sizeof(arr)/sizeof(arr[0]);

    cout << arr[0]; // Output : 40

    return 1;
}
