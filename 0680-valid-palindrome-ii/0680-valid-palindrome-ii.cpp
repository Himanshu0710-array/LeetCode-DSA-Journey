class Solution {
public:
    bool isPal(string s,int l){
        string a;
        for(int i=0;i<s.size();i++){
            if(i==l){
                continue;
            }
            a += s[i];
        }
        int left = 0;
        int right = a.size()-1;
        while(left<=right){
            if(a[left] != a[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }else{
                break;
            }
        }
        return isPal(s,l) || isPal(s,r);
    }
};