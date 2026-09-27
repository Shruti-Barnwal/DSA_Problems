class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& t, vector<int>& c, int r) {
        int n=t.size(), q = 0;
        vector<int>v = {INT_MAX, INT_MAX};

        for(int i=0;i<n;i++){
            int dist = abs(t[i][0] - c[0]) + abs(t[i][1] - c[1]);
            if(dist <= r){
                if(t[i][2] > q){
                    v = {t[i][0], t[i][1]};
                    q = t[i][2];
                }
                else if(t[i][2] == q){
                    v = min(v, {t[i][0],t[i][1]});
                }
            }
        }
        if(v[0] == INT_MAX) return {-1,-1};
        return v;
    }
};