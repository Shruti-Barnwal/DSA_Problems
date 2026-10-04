class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& A) {
        int n = A.size();
        vector<int>s(n), e(n);
        for(int i=0;i<n;i++){
            s[i] = A[i][0];
            e[i] = A[i][1];
        }

        sort(s.begin(),s.end());
        sort(e.begin(),e.end());

        int i = 0, j = 0;
        long long cnt = 0;
        while(i<n && j<n){
            while(s[i] > e[j]) j++;
            cnt += (i-j);
            i++;
        }
        return cnt;
    }
};