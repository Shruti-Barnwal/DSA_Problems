class Solution {
public:
    int maxBalancedShipments(vector<int>& w) {
        int n = w.size();
        int cnt = 0, i = 1;

        while(i<n){
            if(w[i-1] > w[i]){
                cnt++;
                i+=2;
            }
            else i++;
        }
        return cnt;
    }
};