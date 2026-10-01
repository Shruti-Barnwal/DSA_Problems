class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& A) {
        int n = A.size();
        vector<int>start(n), end(n);

        for(int i=0;i<n;i++){
            start[i] = A[i][0];
            end[i] = A[i][1];
        }

        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        int j=0;
        long long cnt = 0;
            
        for(int i=0;i<n;i++){
            while(j < n && end[j] < start[i]){
                j++;
            }
            cnt += i-j;
        }
        return cnt;
    }
};