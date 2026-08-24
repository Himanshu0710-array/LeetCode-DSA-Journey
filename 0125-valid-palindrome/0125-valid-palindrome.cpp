class Solution {
public:
    bool isPalindrome(string s) {
        for(char &c:s){
            c = tolower(c);
        }
        string check;
        for(char c: s){
            if(isalnum(c)){
                check.push_back(c);
            }
        }
        // reverse(check.begin(),check.end());
        int left = 0;
        int right = check.size() - 1;
        while(left <= right){
            if(check[left] != check[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};