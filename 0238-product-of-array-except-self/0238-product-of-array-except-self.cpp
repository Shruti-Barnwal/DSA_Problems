class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int mul = 1, cnt0 = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0) mul *= nums[i];
            else cnt0++;
        }
        for(int i=0;i<n;i++){
            if(cnt0 == 1){
                if(nums[i] != 0) nums[i] = 0;
                else nums[i] = mul;
            }
            else if(cnt0 > 1){
                nums[i] = 0;
            }
            else{
                nums[i] = mul/nums[i];
            }
        }
        return nums;
    }
};