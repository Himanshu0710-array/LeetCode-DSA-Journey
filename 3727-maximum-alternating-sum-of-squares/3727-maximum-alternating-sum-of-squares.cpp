class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> arr;
        for(int i: nums){
            arr.push_back(abs(i));
        }
        long long ans = 0;
        sort(arr.begin(),arr.end());
        int l =0;
        int r= arr.size()-1;
        while(l<=r){
            if(l==r){
                ans += pow(arr[r],2);
            }
            else{
                ans += pow(arr[r],2);
                ans -= pow(arr[l],2);
            }
            l++;
            r--;
        }
        return ans;
    }
};