class Solution {
public:
    int minLength(vector<int>& s, int k) {
        int n = s.size();
        unordered_map<int,int>m;
        int sum = 0, mini = INT_MAX;
        int l=0;
        for(int r=0;r<n;r++){
            m[s[r]]++;
            if(m[s[r]] == 1) sum += s[r];

            while(sum >= k){
                mini = min(mini, r-l+1);
                m[s[l]]--;
                if(m[s[l]] == 0) sum -= s[l];
                l++;
            }
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};