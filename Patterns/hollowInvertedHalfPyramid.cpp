#include <iostream>
using namespace std;

int main() {
  
    int n;
    cout << "Enter number of Rows : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            if(i == 0 || j == 0 || j == n - i -1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout<<endl;
    }

    
    return 0;
}




// #include <iostream>
// using namespace std;

// int main() {
  
//     int n;
//     cout << "Enter number of Rows : ";
//     cin >> n;

//     for(int i = 1; i <= n; i++){
//         if(i==1  || i==n){
//             for(int j = 0; j<n-i+1; j++){
//                 cout << "* ";
//             }
//         }
//         else{
//             cout <<"* ";
//             for(int k=0; k<n-i-1;k++){
//                 cout << "  ";
//             }
//             cout <<"*";
//         }
//         cout<<endl;
//     }

    
//     return 0;
// }
