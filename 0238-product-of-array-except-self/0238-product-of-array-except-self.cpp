class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // do it by prefix and suffix 
        int n=nums.size();
        vector<int>prefix(n), suffix(n);
    
        prefix[0] = 1;
        for(int i=1;i<n;i++){
            prefix[i] = nums[i-1] * prefix[i-1];
        }
        int s = 1;
        for(int i=n-1;i>=0;i--){
            suffix[i] = s * prefix[i];
            s = s * nums[i];
        }
        return suffix;
    }
};