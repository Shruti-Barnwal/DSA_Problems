class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.size();
        int freq[26] = {0};

        for(int i=0;i<n;i++){
            freq[s[i] - 'a']++;
        }

        int cnt = 0;
        for(int i=0;i<26;i++){
            if(freq[i] > 0){
                cnt = freq[i];
                break;
            }
        }

        for(int i=0;i<26;i++){
            if(freq[i] > 0){
                if(freq[i] != cnt) return false;
            }
        }
        return true;
    }
};