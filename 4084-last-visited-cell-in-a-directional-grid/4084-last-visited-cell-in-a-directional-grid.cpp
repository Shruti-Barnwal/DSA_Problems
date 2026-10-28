class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>>visited(n,vector<bool>(m,false));
        visited[0][0] = true;
        vector<int>ans = {0,0};

        int i=0,j=0;
        while(i<n && j<m){
            if(grid[i][j] == 'R'){
                if(j<m-1 && visited[i][j+1] == false){
                    ans = {i,j+1};
                    visited[i][j+1] = true;
                    j++;
                }
                else return ans;
            }
            else if(grid[i][j] == 'L'){
                if(j>0 && visited[i][j-1] == false){
                    ans = {i,j-1};
                    visited[i][j-1] = true;
                    j--;
                }
                else return ans;
            }
            else if(grid[i][j] == 'U'){
                if(i>0 && visited[i-1][j] == false){
                    ans = {i-1,j};
                    visited[i-1][j] = true;
                    i--;
                }
                else return ans;
            }
            else{
                if(i<n-1 && visited[i+1][j] == false){
                    ans = {i+1,j};
                    visited[i+1][j] = true;
                    i++;
                }
                else return ans;
            }
        }
        return ans;
    }
};