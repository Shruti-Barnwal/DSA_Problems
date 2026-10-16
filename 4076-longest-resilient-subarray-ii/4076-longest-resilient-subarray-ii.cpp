class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int len = 1;
        long long pS = nums[0];
        int ans = nums[0]%k, maxi = 1;

        for(int i=1;i<n;i++){
            pS += nums[i];
            if(nums[i]%k == ans){  // comparing with adjacent one
                len++;
            }
            else{
                len = 1, pS = nums[i], ans = nums[i]%k;
            }
            if(pS%k == ans) maxi = max(maxi,len);
        }
        return maxi;
    }
};