class Solution {
    long long reArr(int x){
        int dig[10] = {0};
        long long num = 0;
        while(x > 0){
            dig[x%10]++;
            x/=10;
        }
        for(int i=9;i>=0;i--){
            while(dig[i]){
                num = num*10+i;
                dig[i]--;
            }
        }
        return num;
    }
public:
    long long maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>v;
        long long ans = 0;

        for(int i=0;i<n;i++){
            v.push_back(reArr(nums[i]) - nums[i]);
            ans += nums[i];
        }
        sort(v.begin(), v.end(), greater<long>());
        
        for(int i=0;i<n && k>0; i++){
            ans += v[i];
            k--;
        }
        return ans;
    }
};