class Solution {
    bool prime(int val){
        if(val == 1) return false;
        if(val == 2) return true;
        for(int i=2;i<=val/2;i++){
            if(val % i == 0) return false;
        }
        return true;
    }
public:
    int sumOfPrimesInRange(int n) {
        int sum = 0;
        if(n >= 1 && n <= 9){
            if(prime(n)) return sum += n;
        }
        int r = 0, num = n;
        while(num > 0){
            int digit = num%10;
            r = r*10+digit;
            num = num / 10;
        }

        int minVal = min(n,r), maxVal = max(n,r);
        for(int i=minVal;i<=maxVal;i++){
            cout<<i<<" ";
            if(prime(i)){
                sum += i;
            }
        }
        return sum;
    }
};