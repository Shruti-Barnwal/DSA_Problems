class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s; 
        for(auto i:nums){
            if(s.count(i)) return true; // s.count(i) checks if the value exist or not
            s.insert(i); 
        }
        return false;
    }
};