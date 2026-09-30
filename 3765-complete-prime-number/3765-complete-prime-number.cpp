class Solution {
    bool prime(int n){
        if(n < 2) return false;

        for(int i=2;i*i<=n;i++){
            if(n%i == 0) return false;
        }
        return true;
    }
public:
    bool completePrime(int num){
        string s = to_string(num);
        int n = s.size();

        for(int i=1;i<=n;i++){
            int prefix = stoi(s.substr(0,i));
            int suffix = stoi(s.substr(n-i,i));

            if(!prime(prefix) || !prime(suffix)) return false;
        }
        return true;
    }
};