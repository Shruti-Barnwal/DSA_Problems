class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i=1;
        while(i<n && nums[i-1] < nums[i]) i++;
        int p = i-1;

        while(i<n && nums[i-1] > nums[i]) i++;
        int q = i-1;

        while(i<n && nums[i-1] < nums[i]) i++;
        int r = i-1;

        if(p!=0 && p!=q && q!=r && r==n-1) return true;
        return false;
    }
};