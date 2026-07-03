class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        char carry = '0';
        while (!a.empty() && !b.empty()){
            char x = a.back();
            char y = b.back();
            if(x == '0' && y=='0'){
                if(carry == '1'){
                    ans.insert(ans.begin(),'1');
                    carry = '0';
                }else{
                    ans.insert(ans.begin(),'0');
                }
            }else if((x=='1' && y=='0') || (x=='0' && y=='1')){
                if(carry == '1'){
                    ans.insert(ans.begin(),'0');
                    carry = '1';
                }else{
                    ans.insert(ans.begin(),'1');
                }
            }else{
                if(carry == '1'){
                    ans.insert(ans.begin(),'1');
                    carry = '1';
                }else{
                    ans.insert(ans.begin(),'0');
                    carry = '1';
                }
            }
            a.pop_back();
            b.pop_back();
        }
        while(!a.empty()){
            if(carry == '1' && a.back() == '1'){
                ans.insert(ans.begin(),'0');
                carry = '1';
            }else if((carry == '1' && a.back() == '0') || (carry == '0' && a.back() == '1')){
                ans.insert(ans.begin(),'1');
                carry = '0';
            }else{
                ans.insert(ans.begin(),'0');
            }
            a.pop_back();
        }
         while(!b.empty()){
            if(carry == '1' && b.back() == '1'){
                ans.insert(ans.begin(),'0');
                carry = '1';
            }else if((carry == '1' && b.back() == '0') || (carry == '0' && b.back() == '1')){
                ans.insert(ans.begin(),'1');
                carry = '0';
            }else{
                ans.insert(ans.begin(),'0');
            }
            b.pop_back();
        }
        if(carry == '1'){
            ans.insert(ans.begin(),'1');
        }
        return ans;
    }
};