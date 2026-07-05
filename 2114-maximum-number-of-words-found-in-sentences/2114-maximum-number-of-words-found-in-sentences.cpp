class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        int n = sentences.size();
        for(int i=0;i<n;i++){
            string a = sentences[i];
            int m = a.size();
            int cnt = 1;
            for(int j=0;j<=m;j++){
                if(sentences[i][j] == ' '){
                    cnt++;
                }
                maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};