class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int l=0, sum = 0, minLen=INT_MAX;

        for(int r=0;r<n;r++){
            mpp[nums[r]]++;

            if(mpp[nums[r]] == 1){
                sum += nums[r];  // sum contains only distinct element 
            }
            while(sum >= k){
                minLen = min(minLen, r-l+1);
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0){
                    mpp.erase(nums[l]);
                    sum -= nums[l];
                }
                l++;
            }
        }
        return minLen == INT_MAX? -1:minLen;
    }
};