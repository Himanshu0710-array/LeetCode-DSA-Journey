class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int maxi = 0;
        int score = 0;
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(power >= tokens[i]){
                power -= tokens[i];
                score++;
                i++;
            }
            else if(power < tokens[i] && score > 0){
                power += tokens[j];
                score--;
                j--;
            }else{
                break;
            }
            maxi = max(maxi,score);
        }
        return maxi;
    }
};