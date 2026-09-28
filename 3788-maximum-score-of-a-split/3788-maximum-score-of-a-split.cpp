class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<int>sM(n);
        vector<long long>pS(n);
        long long maxi = LLONG_MIN;

        // we find preSum from 0th - (n-2)th index
        pS[0] = nums[0];
        for(int i=1;i<n-1;i++){
            pS[i] = pS[i-1] + nums[i];
        }

        // also finding min element from 1 to (n-1)th index
        sM[n-1] = nums[n-1];
        for(int i=n-2;i>0;i--){
            sM[i] = min(sM[i+1], nums[i]);
        }

        for(int i=0;i<n-1;i++){
            maxi = max(maxi, pS[i] - sM[i+1]);
        }
        return maxi;
    }
};