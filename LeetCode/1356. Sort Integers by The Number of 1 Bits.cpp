class Solution {
    static bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second < p2.second)
        {
            return true;
        }
        else if(p1.second > p2.second)
        {
            return false;
        }
        else if(p1.first > p2.first){
            return false;
        }
        return true;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> mp;
        vector<int> res;
        
        for(auto it: arr){
            int temp = it;
            int count = 0;
            while(temp != 0){
                if(temp & 1){
                    count++;
                }
                temp = temp >> 1;
            }
            mp.push_back({it,count});
        }

        sort(mp.begin(), mp.end(),comp);

        for(auto it: mp){
            res.push_back(it.first);
        }
        return res;

    }
};