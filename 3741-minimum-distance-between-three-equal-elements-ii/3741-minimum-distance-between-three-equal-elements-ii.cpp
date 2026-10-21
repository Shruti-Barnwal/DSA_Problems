class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>m;

        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }

        int mini = INT_MAX;
        for(auto i:m){
            vector<int>v = i.second;
            int size = v.size();
            if(size >= 3){
                for(int j=0;j<=size-3;j++){
                    int ans = abs(v[j]-v[j+1]) + abs(v[j+1]-v[j+2]) + abs(v[j]-v[j+2]);
                    mini = min(mini, ans);
                }
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};

// [5,3,5,5,5] 