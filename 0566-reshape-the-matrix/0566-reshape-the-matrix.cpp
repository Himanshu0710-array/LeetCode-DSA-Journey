class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans;
        int n = mat.size();
        int m = mat[0].size();
        if(m*n != r * c) return mat;

        vector<int> arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr.size() == c){
                    ans.push_back(arr);
                    arr.clear();
                }
                arr.push_back(mat[i][j]);
            }
        }
        ans.push_back(arr);
        return ans;
    }
};