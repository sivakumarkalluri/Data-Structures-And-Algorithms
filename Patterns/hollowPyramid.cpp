#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
       for(int j = 0; j < n-i-1; j++){
        cout << " ";
       }
       
        if(i==0 || i == n-1){
            for( int k = 0; k < ((i+1)*2)-1; k++){
            cout << "*";
            }
        }
        else{
            cout<<"*";
            for( int k = 0; k < ((i)*2)-1; k++){
            cout << " ";
            }
            cout<<"*";
        }
        
       
       cout << endl;
    }

    
    return 0;
}
