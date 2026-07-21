class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector <int> ans;
        int srow=0,erow=mat.size()-1,scol=0,ecol=mat[0].size()-1;
        while(srow<=erow && scol<=ecol){
            //top
            for(int j=scol;j<=ecol;j++){
                ans.push_back(mat[srow][j]);
            }
            //right
            for(int i=srow+1;i<=erow;i++){
               
                ans.push_back(mat[i][ecol]);
            }
            //bottom
            for(int j=ecol-1;j>=scol;j--){
                if(srow==erow) break;
                ans.push_back(mat[erow][j]);
            }
            //left
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol) break;
                ans.push_back(mat[i][scol]);
            }
            srow++;erow--;scol++;ecol--;
            
        }
        return ans;
    }
};