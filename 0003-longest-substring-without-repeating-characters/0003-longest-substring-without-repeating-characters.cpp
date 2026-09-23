class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;  // O(k) space because we are using k distinct elements

        int l = 0, maxLen = 0;
        for(int r=0;r<s.size();r++){
            if(m.count(s[r])){
                l = max(l, m[s[r]]+1);  // avoid the backward indexing
            }
            m[s[r]] = r;
            maxLen = max(maxLen, r-l+1);
        }
        return maxLen;
    }
};