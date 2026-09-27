class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>freq(101,0);
        vector<int>ans;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        while(ans.size() < n){
            for(int i=1;i<101;i++){
                if(freq[i] > 0){
                    ans.push_back(i);
                    freq[i]--;
                }
            }
        }
        return ans;
    }
        
};