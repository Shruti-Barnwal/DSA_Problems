class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int n = s.size();
        unordered_set<char>st;

        int cnt = 0;
        for(auto i:j){
            st.insert(i);
        }
        for(int i=0;i<n;i++){
            if(st.count(s[i])) cnt++;
        }
        return cnt;
    }
};