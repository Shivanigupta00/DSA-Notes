class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        stack<int>st;
        int curr_score = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='('){
                st.push(curr_score);
                curr_score = 0;
            }else if(s[i]==')'){
                int val = st.top();
                curr_score  = val+ max(2*curr_score,1);
                st.pop();
            }
        }
        return curr_score;
    }
};