class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        vector<int> a;
        int i = lower;
        int r = upper;
        while(i<=r){
            if(mp.find(i) == mp.end()){
                a.push_back(i);
            }else{
                if(!a.empty()){
                    if(a.size() > 2){
                        int x = a[0];
                        int y = a[a.size()-1];
                        ans.push_back({x,y});
                    }
                    else if(a.size() == 1){
                        ans.push_back({a[0],a[0]});
                    }
                    else{
                        ans.push_back(a);
                    }
                    a.clear();
                }
            }
            i++;
        }
        if(!a.empty()){
            if(a.size() > 2){
                int x = a[0];
                int y = a[a.size()-1];
                ans.push_back({x,y});
            }
            else if(a.size() == 1){
                ans.push_back({a[0],a[0]});
            }
            else{
                ans.push_back(a);
            }
        }
        return ans;
        
    }
};