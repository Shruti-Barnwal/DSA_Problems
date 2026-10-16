class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>m;
        m[0] = 1; // mapping the base 0 with the freq 1
        int pS = 0, cnt = 0;
        for(int i=0;i<n;i++){
            pS += nums[i];
            if(m.count(pS-k)) cnt += m[pS-k];
            m[pS]++;
        }
        return cnt;
    }
};