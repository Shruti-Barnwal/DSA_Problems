class Solution {
    bool vowels(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int cnt = 0, maxi = 0;
        for(int i=0;i<n;++i){
            if(i >= k){
                if(vowels(s[i-k])) cnt--;
            }
            if(vowels(s[i])){
                cnt++;
                maxi = max(cnt,maxi);
            }
        }
        return maxi;
    }
};