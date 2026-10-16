class Solution {
    string reverse(string s, int a, int b){
        while(a < b){
            swap(s[a++],s[b--]);
        }
        return s;
    }
    int solve(string s, int n){
        int rSum = 0;
        rSum += min(abs(s[0]-'0'), 10 - abs(s[0]-'0'));
        for(int i=1;i<n;i++){
            rSum += min(abs(s[i]-s[i-1]), 10 - abs(s[i]-s[i-1]));
        }
        return rSum;
    }
public:
    int minRotations(int n, string s) {
        int mini = INT_MAX;
        mini = min(mini, solve(s,n));
        int oriVal = mini; // which keeps track of the original value
        string str = reverse(s,0,n-1);
        mini = min(mini, solve(str,n));

        for(int i=1;i<n-1;i++){
            int beforeRev = min(abs(s[i]-s[i-1]), 10-abs(s[i]-s[i-1]));
            int afterRev = min(abs(s[n-1]-s[i-1]), 10-abs(s[n-1]-s[i-1]));
            mini = min(mini, oriVal - beforeRev + afterRev);
        }
        return mini;
    }
};