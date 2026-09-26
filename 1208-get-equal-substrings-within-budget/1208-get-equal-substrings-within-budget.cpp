class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();
        int l=0, maxi = 0;
        for(int r=0;r<n;r++){
            int diff =  abs(s[r]-t[r]);
            if(diff <= maxCost){
                maxCost -= diff;
                maxi = max(maxi, r-l+1);
            }
            else{
                maxCost += abs(s[l]-t[l]);
                maxCost -= abs(s[r]-t[r]);
                l++;
            }
        }
        return maxi;
    }
};