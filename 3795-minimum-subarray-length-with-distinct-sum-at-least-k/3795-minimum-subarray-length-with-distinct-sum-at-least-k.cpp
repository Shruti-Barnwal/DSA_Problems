class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;

        int l = 0, sum = 0, mini = INT_MAX;
        for(int r=0;r<n;r++){
            freq[nums[r]]++;

            if(freq[nums[r]] == 1){
                sum += nums[r];
            }

            while(sum >= k){
                mini = min(mini, r-l+1);
                freq[nums[l]]--;
                if(freq[nums[l]] == 0){
                    freq.erase(nums[l]);
                    sum -= nums[l];
                }
                l++;
            }
        }
        return mini == INT_MAX? -1:mini;
    }
};