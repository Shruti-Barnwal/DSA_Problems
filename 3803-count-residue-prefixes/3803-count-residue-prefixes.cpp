class Solution {
public:
    int residuePrefixes(string s) {
        int n=s.size();
        unordered_map<char,int>m;
        int cnt = 0;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            if(m.size() == (i+1)%3) cnt++;
        }
        return cnt;
    }
};