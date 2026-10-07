class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        long long sum1 = 0, sum2 = 0;

        int i=0;
        while(i<n){
            if(nums[i] < nums[i+1]){
                sum1 += nums[i];
                i++;
            }
            else break;
        }
        sum1 += nums[i];

        while(i<n-1){
            if(nums[i] > nums[i+1]){
                sum2 += nums[i];
                i++;
            }
        }
        sum2 += nums[i];

        if(sum1 > sum2) return 0;
        else if(sum1 < sum2) return 1;
        else return -1;
    }
};