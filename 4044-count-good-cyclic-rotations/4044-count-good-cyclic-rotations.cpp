class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size(), h = n/2;
        long long sum = 0, tSum = 0;

        for(int i=0;i<n;i++){
            tSum += nums[i];
        }

        int l=0, rotCnt = 0;
        for(int r=0;r<n;r++){
            if(r >= h){
                if(tSum - sum != sum) rotCnt++;
                sum -= nums[l];
                l++;
            }
            sum += nums[r];
        }
        return rotCnt;
    }
};