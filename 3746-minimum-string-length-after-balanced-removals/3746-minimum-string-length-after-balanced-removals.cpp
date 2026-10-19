class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n = s.size();
        vector<int>v(2,0);
        for(int i=0;i<n;i++){
            if(s[i] == 'a') v[0]++;
            else v[1]++;
        }
        return abs(v[0]-v[1]);
    }
};