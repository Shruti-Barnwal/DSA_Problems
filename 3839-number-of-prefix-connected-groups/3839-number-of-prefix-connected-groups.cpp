class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string, int>m;
        for(int i=0;i<n;i++){
            if(words[i].size() < k) continue;
            string s = words[i].substr(0,k);
            m[s]++;
        }

        // for(auto i:m){
        //     cout<<i.first<<"->"<<i.second<<"   ";
        // }
        // cout<<endl;

        int cnt = 0;
        for(auto i:m){
            if(i.second >= 2) cnt++;
        }
        return cnt;
    }
};