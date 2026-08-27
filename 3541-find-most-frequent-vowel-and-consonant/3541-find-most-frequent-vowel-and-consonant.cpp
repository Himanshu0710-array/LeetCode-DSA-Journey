class Solution {
public:
    int maxFreqSum(string s) {
        int maxv = 0;
        int maxc = 0;
        vector<int> arr(26);
        for(char c: s){
            arr[c-'a']++;
        }
        vector<int> v;
        for(int i=0;i<26;i++){
            if(i== 0 || i == 4 || i == 8 || i == 14 || i == 20){
                maxv = max(maxv,arr[i]);
            }else{
                maxc = max(maxc,arr[i]);
            }
        }
        return maxc + maxv;
    }
};