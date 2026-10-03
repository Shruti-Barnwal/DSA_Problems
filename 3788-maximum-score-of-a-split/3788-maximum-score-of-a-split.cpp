class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>preSum(n);
        vector<int>suffMin(n);

        preSum[0] = nums[0];
        for(int i=1;i<n-1;i++){
            preSum[i] = preSum[i-1] + nums[i];
        }

        suffMin[n-1] = nums[n-1];
        for(int i=n-2;i>=1;i--){
            suffMin[i] = min(nums[i], suffMin[i+1]);
        }

        long long maxi = LLONG_MIN;
        for(int i=0;i<n-1;i++){
            maxi = max(maxi, preSum[i] - suffMin[i+1]);
        }
        return maxi;
    }
};