class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), op = 0;
        unordered_map<int,int>m;
        for(int i=n-1;i>=0;i--){
            m[nums[i]]++;

            if(m[nums[i]] > 1){
                op += (i/3) + 1; // Number of operations needed to remove the duplicate at index i from the start
                break;
            }
        }
        return op;
    }
};