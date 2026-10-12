class Solution {
public:
    bool threeFibonacciSum(int n) {
        // 0, 1, 1, 2, 3, 5, 8, 13, ...

        int a = 0, b = 1, c = a+b;
        int sum = a+b+c;
        while(sum < n){
            a = b;
            b = c;
            c = a+b;
            sum = a+b+c;
        }
        if(sum == n) return true;
        else return false;
    }
};