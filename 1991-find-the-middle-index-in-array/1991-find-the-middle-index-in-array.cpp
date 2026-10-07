class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>pS(n), sS(n);

        pS[0] = nums[0];
        for(int i=1;i<n;i++){
            pS[i] = pS[i-1]+nums[i];
        }

        sS[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            sS[i] = sS[i+1]+nums[i];
        }

        for(int i=0;i<n;i++){
            if(pS[i] == sS[i]) return i;
        }
        return -1;
    }
};