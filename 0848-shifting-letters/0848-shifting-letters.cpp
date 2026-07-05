class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string ans = "";
        int n = shifts.size();
        vector<long long> arr(n);
        long long sum = 0;
        for(int i=n-1;i>=0;i--){
            sum += shifts[i];
            arr[i] = sum;
        }
        for(int i=0;i<n;i++){
            char a = 'a' + (s[i] - 'a' + arr[i] % 26) % 26;
            ans += a;
        }
        return ans;
    }
};