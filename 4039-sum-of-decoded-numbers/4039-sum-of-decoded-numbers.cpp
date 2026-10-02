class Solution {
    long long power(long long x, long long y){
        long long MOD = 1e9 + 7;
        long long ans = 1;

        while(y > 0){
            if(y%2 == 1) ans = (ans*x) % MOD;  // if it exceeds MOD then ans stores remainder value
            x = (x*x) % MOD;
            y /= 2;
        }
        return ans;
    }
public:
    int sumDecoded(vector<long long>& nums) {
        int n=nums.size();
        long long MOD = 1e9 + 7;
        long long sum = 0;

        for(int i=0;i<n;i++){
            int w = nums[i]%10;
            long long num = nums[i];

            string s = to_string(num);
            string X,Y;
            for(int j=0;j<w;j++){
                X.push_back(s[j]);
            }
            for(int j=w;j<s.size()-1;j++){
                Y.push_back(s[j]);
            }

            long long x = stoll(X), y = stoll(Y);
            // because x,y is too long we cant use pow() func directly
            sum = (sum + power(x, y)) % MOD;

        }
        return sum;
    }
};