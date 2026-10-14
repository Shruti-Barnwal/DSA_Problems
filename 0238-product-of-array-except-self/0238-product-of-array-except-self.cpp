class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans(n);
        int mul = 1, exist0 = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0) mul *= nums[i];
            else exist0++;
        }
        if(exist0 > 1) return ans;
        for(int i=0;i<n;i++){
            if(exist0 == 1 && nums[i] != 0) ans[i] = 0;
            else if(exist0 == 1 && nums[i] == 0) ans[i] = mul;
            else ans[i] = mul/nums[i];
        }
        return ans;
    }
};