class Solution {
    bool isValid(long long sum, int x){
        int last = sum%10;
        while(sum >= 10){
            sum /= 10;
        }
        int first = sum;
        if(first == x && last == x) return true;
        return false;
    }
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int cnt = 0;

        for(int i=0;i<n;i++){
            long long sum = 0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                if(isValid(sum, x)) cnt++;
            }
        }
        return cnt;
    }
};