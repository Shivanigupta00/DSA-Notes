class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int cnt = 0;
        int maxi = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='('){
                st.push(s[i]);
            }else if(s[i]==')'){
                cnt = st.size();
                st.pop();
                maxi = max(maxi, cnt);
            }
        }
        return maxi;

    }
};