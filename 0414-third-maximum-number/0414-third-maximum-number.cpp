class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;

        for(auto i:nums){
            if(i == first || i == second || i == third) continue;
            if(i > first){
                third = second;
                second = first;
                first = i;
            }

            else if(i > second){
                third = second;
                second = i;
            }

            else if(i > third){
                third = i;
            }

        }
        cout<<first<<" "<<second<<" "<<third;
        return third == LLONG_MIN? first:third;
    }
};