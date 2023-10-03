class Solution {
public:
    vector<int> evenOddBit(int n) {
        int pos = 0;
        int temp = n;
        vector<int> res = {0, 0};

        while(temp != 0){
            if(temp & 1){
                if(pos % 2 == 0){
                    res[0]++;
                }
                else{
                    res[1]++;
                }
            }
            pos++;
            temp = temp >> 1;
        }
        return res;
    }
};