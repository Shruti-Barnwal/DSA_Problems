class Solution {
    long long power(long long x, long long y){
        long long MOD = 1e9+7;
        int ans = 1;
        while(y > 0){
            if(y%2 == 1) ans = (ans*x) % MOD;
            x = (x*x) % MOD;
            y /= 2;
        }
        return ans;
    }
public:
    int sumDecoded(vector<long long>& nums) {
        long long MOD = 1e9+7;
        int n=nums.size(), sum = 0;

        for(int i=0;i<n;i++){
            int w = nums[i]%10;
            string s = to_string(nums[i]);
            string x,y;
            for(int j=0;j<w;j++) x.push_back(s[j]);
            for(int j=w;j<s.size()-1;j++) y.push_back(s[j]);

            int X = stoll(x), Y = stoll(y);
            sum = (sum + power(X,Y)) % MOD;
        }
        return sum;
    }
};