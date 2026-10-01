class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>>m;
        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }
        
        int cnt = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            vector<int>temp = it->second;
            bool flag = true;
            // for(int i=0;i<temp.size();i++){
            //     cout<<temp[i]<<" ";
            // }
            if(temp.size() >= 3){
                int diff = temp[1]-temp[0];
                for(int i=2;i<temp.size();i++){
                    if(temp[i] - temp[i-1] != diff){
                        flag = false;
                        break;
                    }
                }
                if(flag == true) cnt++;
            }
        }
        return cnt;
    }
};