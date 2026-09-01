class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n = list1.size();
        int m = list2.size();
        vector<string> ans;
        int min = -1;
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(list1[i] == list2[j]){
                    if(ans.empty()){
                        ans.push_back(list1[i]);
                        min = i + j;
                    }else if(i+j < min){
                        ans.clear();
                        min = i+j;
                        ans.push_back(list1[i]);
                    }else if(i+j == min){
                        ans.push_back(list1[i]);
                    }
                }
            }
        }
        return ans;
    }
};