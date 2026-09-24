class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt0 = 0, max1 = 0;

        int l=0;
        for(int r=0;r<n;r++){
            if(nums[r] == 0) cnt0++;
            if(cnt0 > k){
                if(nums[l] == 0) cnt0--;
                l++;
            }
            else max1 = max(max1, r-l+1);
        }
        return max1;
    }
};