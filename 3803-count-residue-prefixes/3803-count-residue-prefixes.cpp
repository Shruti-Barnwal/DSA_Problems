class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char>st;
        int cnt = 0, i=0;
        while(i<s.size()){
            if(!st.count(s[i])) st.insert(s[i]);

            if(st.size() == (i+1)%3) cnt++;
    
            i++;
        }
        
        return cnt;
    }
};