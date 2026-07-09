class Solution {
public:
    void rev(vector<int> &ans,int st, int end){
        int i = st;
        int r = end;
        while(i<=r){
            swap(ans[i],ans[r]);
            i++;
            r--;
        }
    }
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rot;
        for(int i=0;i<n;i++){
            if(nums[i] >= 0){
                rot.push_back(nums[i]);
            }
        }
        int a = rot.size();
        if(a==0) return nums;
        k %= a;
        rev(rot,0,a-1);
        rev(rot,0,a-k-1);
        rev(rot,a-k,a-1);
        int i = 0;
        int j = 0;
        while(i<a && j<n){
            if(nums[j] >= 0){
                nums[j] = rot[i];
                i++;
            }
            j++;
        }
        return nums;
    }
};














