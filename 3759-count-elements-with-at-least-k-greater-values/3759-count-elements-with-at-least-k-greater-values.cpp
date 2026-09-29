class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == 0) return n;

        sort(nums.begin(), nums.end());
        int cnt = 0, kth = nums[n-k];

        for(int i=0;i<n-k;i++){
            if(kth > nums[i]) cnt++;
        }
        return cnt;
    }
};