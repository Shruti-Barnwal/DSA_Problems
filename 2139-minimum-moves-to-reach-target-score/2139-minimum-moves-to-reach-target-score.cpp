class Solution {
public:
    int minMoves(int target, int mD) {
        if(mD == 0) return target-1;

        int cnt = 0;
        while(mD > 0 && target > 1){
            if(target%2 == 1) cnt++;
            target = target/2;
            cnt++;
            mD--;
        }
        return cnt + (target-1);
    }
};