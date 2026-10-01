class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        int opCnt = 0, disNum = freq.size();
        if(n == disNum) return 0;
        int i=0;
        while(n > disNum){
            opCnt++;
            for(int j=0;j<3 && i<nums.size();j++){
                freq[nums[i]]--;
                if(freq[nums[i]] == 0) disNum--;
                n--, i++;
            }
        }
        
        return opCnt;
    }
};