class Solution {
public:
    int maxProduct(int n) {
        int maxi = -1;
        int smax = -1;
        int pro = 1;
        vector<int> arr;
        while(n){
            int a = n%10;
            arr.push_back(a);
            n = n/10;
        }
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i] > maxi){
        //         smax = maxi;
        //         maxi = arr[i];
        //     }else if(arr[i] > smax){
        //         smax = arr[i];
        //     }
        // }
        sort(arr.begin(),arr.end());
        int x = arr.size();
        return arr[x-1] * arr[x-2];
        // return maxi * smax;
    }
};