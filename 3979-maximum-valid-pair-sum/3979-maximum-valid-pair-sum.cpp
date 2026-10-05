class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>sM(n);
        int sum = 0, maxi = INT_MIN;
        sM[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            sM[i] = max(sM[i+1], nums[i]);
        }
        for(int i=0;i<n-k;i++){
            maxi = max(maxi, nums[i]+sM[i+k]);
        }
        return maxi;
    }
};