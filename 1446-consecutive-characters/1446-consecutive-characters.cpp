class Solution {
public:
    int maxPower(string s) {
        int cnt = 1, maxi = 0;
        if(s.size() == 1) return cnt;
        
        for(int i=0;i<s.size()-1;++i){
            if(s[i] == s[i+1]){
                cnt++;
            }
            else cnt = 1;
            maxi = max(cnt, maxi);
        }
        return maxi;
    }
};