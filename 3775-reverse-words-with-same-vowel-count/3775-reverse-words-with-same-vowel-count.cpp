class Solution {
    bool vowels(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u';
    }
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0, cnt = 0;
        while(i<n && s[i] != ' '){
            if(vowels(s[i])) cnt++;
            i++;
        }

        vector<string>words;
        string word = "";
        for(int i=0;i<n;i++){
            if(s[i] == ' '){
                words.push_back(word);
                word = "";
            }
            else word += s[i];
        }
        words.push_back(word);

        for(int i=1;i<words.size();i++){
            word = words[i];
            int vowCnt = 0;
            for(int j=0;j<word.size();j++){
                if(vowels(word[j])) vowCnt++;
            }
            if(vowCnt == cnt){
                reverse(words[i].begin(),words[i].end());
            }
        }

        string ans = "";
        for(int i=0;i<words.size();i++){
            ans += words[i] + " ";

        }
        ans.pop_back();
        return ans;
    }
};