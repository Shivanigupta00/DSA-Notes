class Solution {
public:
    int distinctSubseqII(string s) {
        long mod = 1e9 + 7;
        vector<long> last(26, 0);

        for (char c : s) {
            long total = 0;
            for (int count : last) {
                total = (total + count) % mod;
            }
            // Add 1 for the single-character subsequence consisting of `c`
            last[c - 'a'] = (total + 1) % mod;
        }

        long ans = 0;
        for (long count : last) {
            ans = (ans + count) % mod;
        }
        return ans;
    }
};