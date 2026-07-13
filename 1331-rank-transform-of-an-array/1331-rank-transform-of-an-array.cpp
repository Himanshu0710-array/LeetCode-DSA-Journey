class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return {};
        vector<int> ans(n);
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({arr[i],i});
        }
        sort(a.begin(),a.end());
        int rank = 1;
        ans[a[0].second] = 1;
        for(int i=1;i<n;i++){
            if(a[i].first != a[i-1].first) ++rank;
            ans[a[i].second] = rank;

        }
        return ans;
    }   
};