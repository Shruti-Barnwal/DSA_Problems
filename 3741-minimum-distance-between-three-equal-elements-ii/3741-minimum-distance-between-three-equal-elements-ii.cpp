class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>m;
        int mini = INT_MAX;

        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }
        for(auto i:m){
            auto idx = i.second;
            if(idx.size() >= 3){
                int sum = 0;
                for(int j = 0; j<=idx.size()-3; j++){
                    sum = abs(idx[j]-idx[j+1]) + abs(idx[j]-idx[j+2]) + abs(idx[j+1]-idx[j+2]);
                    mini = min(mini,sum);
                }
            }
        }
        return mini == INT_MAX ? -1:mini;
    }
};