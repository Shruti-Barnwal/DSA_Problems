class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(101, 0);

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        // for(int i=0;i<freq.size();i++){
        //     if(freq[i] > 0) cout<<freq[i]<<" ";
        // }

        vector<int>ans;
        while(ans.size() != n){
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