class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(auto i:s){
            m[i]++;
        }

        auto val = m.begin();
        for(auto i:m){
            if(val->second != i.second) return false;
        }
        return true;
    }
};