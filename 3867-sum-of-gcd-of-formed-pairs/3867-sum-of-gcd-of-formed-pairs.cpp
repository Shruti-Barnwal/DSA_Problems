class Solution {
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a%b);
    }
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>pM(n), pGCD(n);

        pM[0] = nums[0];
        for(int i=1;i<n;i++){
            pM[i] = max(pM[i-1], nums[i]);
        }
        for(int i=0;i<n;i++){
            pGCD[i] = gcd(nums[i],pM[i]);
        }
        sort(pGCD.begin(), pGCD.end());

        int i=0, j=n-1;
        long long sum = 0;
        while(i<j){
            sum += gcd(pGCD[i], pGCD[j]);
            i++, j--;
        }
        return sum;
    }
};