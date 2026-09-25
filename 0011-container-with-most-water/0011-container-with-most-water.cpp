class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int l = 0, r = n-1, maxi = INT_MIN;
        while(l<r){
            int area = min(h[l],h[r]) * (r-l);
            maxi = max(maxi, area);
            if(h[l] < h[r]) l++;
            else r--;
        }
        return maxi;
    }
};