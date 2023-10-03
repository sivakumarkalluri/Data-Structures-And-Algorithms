#include <iostream>
# include<bits/stdc++.h>
using namespace std;

int main() {
    
   vector<int> arr = {1,2,4,4,8,5,5,2,3,1,3};
   int res = 0;
   for(auto it: arr) {
        res ^= it;
   }
   
   cout << res;
    
    return 0;
}
