class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m; // stores freq of an array
        unordered_map<int,int>freq;  // stores freq of the freq

        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        for(auto i:m){
            freq[i.second]++;
        }

        for(int i=0;i<n;i++){
            if(freq[m[nums[i]]] == 1) return nums[i];
        }
        return -1;
    }
};