class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>>m;
        int mini = INT_MAX;

        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
            if(m[nums[i]].size() >= 3){
                vector<int>&v = m[nums[i]];
                int size = v.size();

                int k = v[size-3];
                mini = min(mini, 2*abs(k-i));
            }
        }
        return mini == INT_MAX ? -1:mini;
    }
};