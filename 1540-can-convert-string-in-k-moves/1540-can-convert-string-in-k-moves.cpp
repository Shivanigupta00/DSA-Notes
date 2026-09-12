class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.length() != t.length()) return false;

        vector<int>count(26,0);
        for(int i = 0; i<s.length(); i++){
            int shift = (t[i]-s[i]+26) % 26;
            if(shift == 0) continue;

            long long move = (long long) shift + 26LL* count[shift];
            if(move > k){
                return false;
            }
            count[shift]++;
        }
        return true;
    }
};