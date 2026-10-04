class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        cout<<n<<" ";
        unordered_map<char,int>m;
        int l=0, r=0, maxi = 0;
        while(r<n){
            while(m.count(s[r])){
                m[s[l]]--;
                if(m[s[l]] == 0) m.erase(s[l]);
                l++;
            }
            m[s[r]]++;
            int size = m.size();
            maxi = max(maxi, size);
            r++;
        }
        return maxi;
    }
};