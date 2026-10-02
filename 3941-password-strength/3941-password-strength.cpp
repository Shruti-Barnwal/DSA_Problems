class Solution {
public:
    int passwordStrength(string s) {
        int n = s.size(), cnt = 0;
        unordered_set<char>st;  // O(1) s.c because it stores char of fixed size i.e at most 256
        for(auto i:s){
            st.insert(i);
        }

        for(auto i:st){
            if(i >= 'a' && i <= 'z') cnt += 1;
            else if(i >= 'A' && i <= 'Z') cnt += 2;
            else if(i >= '0' && i <= '9') cnt += 3;
            else cnt += 5;
        }
        return cnt;
    }
};