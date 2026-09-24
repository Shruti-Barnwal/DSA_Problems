class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt0 = 0, cnt1 = 0, max1 = 0;

        int l = 0;
        for(int r=0;r<n;r++){
            if(nums[r] == 0 && cnt0 == k){
                while(nums[l] != 0){
                    if(nums[l] == 1){
                        cnt1 = r-l+1;
                    }
                    l++;
                }
                if(nums[l] == 0){
                    cnt0--;
                    l++;
                    cnt1 = r-l+1;
                }
            }
            if(nums[r] == 1){
                cnt1 = r-l+1;
                max1 = max(max1, cnt1);
            }
            if(nums[r] == 0 && cnt0 < k){
                cnt1 = r-l+1;
                max1 = max(max1, cnt1);
                cnt0++;
            }

        }
        return max1;
    }
};