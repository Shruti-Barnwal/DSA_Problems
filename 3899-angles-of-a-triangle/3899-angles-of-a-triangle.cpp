class Solution {
    bool isTriangle(int a,int b,int c){
        if(a+b > c) return true;
        return false;
    }

    double solve(int a,int b,int c){
        double angle = acos((b*b + c*c - a*a) / (2.0*b*c));
        double degree = angle * 180.0/acos(-1);
        cout<<degree<<" ";
        return degree;
    }
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>ans;
        sort(sides.begin(), sides.end());
        int a = sides[0], b = sides[1], c = sides[2];
        if(isTriangle(a,b,c)){
            ans.push_back(solve(a,b,c));
            ans.push_back(solve(b,c,a));
            ans.push_back(solve(c,a,b));
        }
        else return ans;
        return ans;
    }
};