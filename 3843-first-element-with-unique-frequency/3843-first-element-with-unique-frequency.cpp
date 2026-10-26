class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        unordered_map<int,int>freqCnt;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        for(auto i:freq){
            freqCnt[i.second]++;
        }

        for(int i=0;i<n;i++){
            if(freqCnt[freq[nums[i]]] == 1) return nums[i];
        }
        return -1;
    }
};