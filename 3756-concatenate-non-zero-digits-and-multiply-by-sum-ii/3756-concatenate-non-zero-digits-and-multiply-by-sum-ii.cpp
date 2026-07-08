class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const long long MOD = 1e9 + 7;
        int n = s.size();

        vector<long long> pow10(n + 1), V(n + 1, 0), S(n + 1, 0);
        vector<int> C(n + 1, 0);
        pow10[0] = 1;

        for (int i = 0; i < n; i++) {
            pow10[i+1] = pow10[i] * 10 % MOD;
            int d = s[i] - '0';
            S[i+1] = S[i] + d;
            V[i+1] = (d != 0) ? (V[i] * 10 + d) % MOD : V[i];
            C[i+1] = C[i] + (d != 0);
        }

        vector<int> ans;
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            long long x = (V[r+1] - V[l] * pow10[C[r+1] - C[l]] % MOD + MOD) % MOD;
            long long sum = S[r+1] - S[l];
            ans.push_back((int)(x * sum % MOD));
        }
        return ans;
    }
};