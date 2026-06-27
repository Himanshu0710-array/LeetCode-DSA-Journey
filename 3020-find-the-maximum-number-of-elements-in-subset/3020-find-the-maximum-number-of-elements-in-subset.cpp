class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        if(mp[1]%2 == 0) {
            ans = mp[1] - 1;
        }else{
            ans = mp[1];
        }
        mp.erase(1);

        for(auto &p: mp){
            long long num = p.first;
            long long i = num;
            int len = 0;
            bool overflow = false;
            while(mp.count(i) && mp[i] > 1){
                len += 2;
                if(i> LLONG_MAX/i){
                    overflow = true;
                    break;
                }
                i = i*i;
            }
            if(!overflow && mp.count(i)){
                ans = max(ans,len+1);
            }else{
                ans = max(ans,len-1);
            }
        }
        return ans;
    }
};