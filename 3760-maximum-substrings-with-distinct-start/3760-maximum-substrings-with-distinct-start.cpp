class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        vector<int>v(26,0);
        int cnt = 0;
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v[i] > 0) cnt++;
        }
        return cnt;
    }
};