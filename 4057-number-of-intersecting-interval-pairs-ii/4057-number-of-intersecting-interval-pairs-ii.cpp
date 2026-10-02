class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& A) {
        int n = A.size();
        vector<int>start(n), end(n);

        for(int i=0;i<n;i++){
            start[i] = A[i][0];
            end[i] = A[i][1];
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        long long cnt = 0;
        int j = 0; //points to the end vector
        for(int i=0;i<n;i++){ // points to the start vector
            while(j < n && start[i] > end[j]) j++;
            cnt += i-j;      
        }
        return cnt;
    }
};