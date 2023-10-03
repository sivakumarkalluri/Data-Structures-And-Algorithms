#include <iostream>
using namespace std;

int main() {
    
    // int arr[];  ***** Gives error Size must be given during initialisation
    int arr[5]; // Right way;
    //arr[5] ={1,3,4,5} // We cannot perform initialisation like this
    // we neeed to initialise each index value
    arr[0] = 1;
    cout << arr[0] <<endl; // 1
    cout << arr[1] <<endl; // 1995276909 Garbage value since it is not initialised
    cout << arr [7] <<endl; // 3995276909 Garbage value since it is out of index
    arr[7]=5;   // index 7 will be intialised now size becomes 7
    cout << arr[7] <<endl; // 5

    int demo[6]={20,30,40}; // Another type of initialisation
    int demo2[]={20,30,40}; // Automatically assigns the size
    cout << demo[4] <<endl; // 0 since it is not initialised
    cout << demo[8] << endl; //1995276909 Garbage value since it is out of index
    demo[9] = 10;
    cout << demo[9] << endl; // 10 
    cout << demo [8] << endl; // 6422356  Garbage value since it is out of index from first declaration
    
    int n;
    cout << "Enter size of arr : ";
    cin >> n;
    int temp[n];
    for(int i = 0; i<n; i++){
        cout << "Enter the value of temp[" << i << "] ";
        cin >> temp[i];
    }
    cout << "Array values are :"<<endl;
    for(int i = 0; i<n; i++){
       cout << temp[i]<<endl;
    }

    
    return 0;
}
