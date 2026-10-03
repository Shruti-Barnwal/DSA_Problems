class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;

        vector<int>suff(n);
        suff[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i] = max(suff[i+1], nums[i]);
        }
        for(int i=0;i<n-k;i++){
            maxi = max(maxi, nums[i] + suff[i+k]);
        }
        return maxi;
    }
};