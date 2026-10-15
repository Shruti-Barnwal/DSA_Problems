class Solution {
    string reversePart(string str, int a,int b){
        while(a<=b){
            swap(str[a++], str[b--]);
        }
        return str;
    }
    int solve(string s) {
        int rSum = 0;
        rSum += min(abs(s[0]-'0'), 10-abs(s[0]-'0'));
        for(int i=1;i<s.size();i++){
            rSum += min(abs(s[i]-s[i-1]), 10-abs(s[i]-s[i-1]));
        }
        //cout<<rSum<<" ";
        return rSum;
    }
public:
    int minRotations(int n, string s) {
        int mini = INT_MAX;
        mini = min(mini, solve(s));
        int tot = mini;
        string str = reversePart(s,0,n-1);
        mini = min(mini, solve(str));

        for(int i=1;i<n-1;i++){
            int rSum = min(abs(s[i]-s[i-1]), 10-abs(s[i]-s[i-1]));
            mini = min(mini, tot - rSum + min(abs(s[n-1]-s[i-1]), 10-abs(s[n-1]-s[i-1])));
            //cout<<mini<<" ";
        }
        return mini;
    }
};