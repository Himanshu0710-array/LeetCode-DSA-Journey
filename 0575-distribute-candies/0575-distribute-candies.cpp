class Solution {
public:
    int distributeCandies(vector<int>& arr) {
        int n = arr.size();
        int x = n/2;
        unordered_set<int> st;
        for(int i: arr){
            st.insert(i);
        }
        int y = st.size();
        if(x == y){
            return x;
        }else if(x > y){
            return y;
        }
        return x;
    }
};