class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int l = 0, r = n-1, cnt = 1;
        int lSum = 0, sSum = 0;
        while(cnt <= k){
            sSum += nums[l++];
            lSum += nums[r--];
            cnt++;
        }
        return lSum-sSum;
    }
};