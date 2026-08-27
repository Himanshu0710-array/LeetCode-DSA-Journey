class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();

        if(k == 1) return true;

        for(int start = 0; start + m * k <= n; start++) {

            vector<int> check;

            for(int i = start; i < start + m; i++)
                check.push_back(arr[i]);

            int left = start + m;
            int right = left + m - 1;
            int cnt = 1;

            while(right < n) {
                bool flag = true;

                for(int i = left, x = 0;
                    i <= right;
                    i++, x++) {

                    if(arr[i] != check[x]) {
                        flag = false;
                        break;
                    }
                }

                if(flag) {
                    cnt++;

                    if(cnt >= k)
                        return true;
                }
                else {
                    break;
                }

                left += m;
                right += m;
            }
        }

        return false;
    }
};