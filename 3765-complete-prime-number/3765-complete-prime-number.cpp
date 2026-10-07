class Solution {
    bool isPrime(int val){
        if(val < 2) return false;
        for(int i=2;i*i<=val;i++){
            if(val%i == 0) return false;
        }
        return true;
    }
public:
    bool completePrime(int num) {
        string s = to_string(num);
        int n = s.size();

        string pre, suff;
        for(int i=1;i<n;i++){
            int pre = stoi(s.substr(0,i));
            cout<<pre<<" ";
            if(!isPrime(pre)) return false;
        }

        for(int i=0;i<n;i++){
            int suff = stoi(s.substr(i));
            cout<<suff<<" ";
            if(!isPrime(suff)) return false;
        }
        return true;
    }
};