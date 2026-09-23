class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};
        for(int i=0;i<s.size();i++){
            freq[s[i] - 'a']++;
        }

        int ans = 0;
        for(int i=0;i<26;i++){
            if(freq[i] > 0){
                ans = freq[i];
                break;
            }
        }

        for(int i=0;i<26;i++){
            if(freq[i] > 0 && freq[i] != ans){
                return false;
            }
        }
        return true;
    }
};