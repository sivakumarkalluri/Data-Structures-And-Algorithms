#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i <n; i++){
        if(i == 0 || i==n-1){
            for(int j = 0; j <i+1; j++ )
                cout << j+1 << " ";
       }
       else{
        for(int j = 0; j< (2*i)+1; j++){
            if(j == 0){
                cout << 1;
            }
            else if(j == (2*i)){
                cout << i+1;
            } 
            else{
                cout << " ";
            }
        }            
        
       }
        
        cout << endl;
    }

    
    return 0;
}
