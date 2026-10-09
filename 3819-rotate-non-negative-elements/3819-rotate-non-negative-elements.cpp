class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i] >= 0) v.push_back(nums[i]);
        }
        int size = v.size();
        vector<int>ans(size);
        for(int i=0; i<size; i++){
            ans[i] = v[(i+k)%size];
        }

        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i] >= 0){
                nums[i] = ans[j];
                j++;
            }
        }
        return nums;
    }
};