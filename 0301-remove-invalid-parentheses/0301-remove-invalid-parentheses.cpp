class Solution {
public:
    unordered_set<string> validSet;
    void backtrack(string &s, int idx,int lc, int rc,int balance, string curr){
        if(idx == s.length()){
            if(balance == 0 && lc == 0 && rc == 0){
                validSet.insert(curr);
            }
            return;
        }
        char c = s[idx];

        // remove curr invalid character
        if(c=='(' && lc>0){
            backtrack(s,idx+1,lc-1, rc,balance, curr);
        }else if(c==')' && rc>0){
            backtrack(s,idx+1,lc, rc-1,balance,curr);
        }

        // Keep current character
        if(c=='('){
            backtrack(s,idx+1,lc,rc,balance+1,curr+c);
        }else if(c==')'){
            if(balance >0){
                backtrack(s,idx+1, lc,rc,balance-1,curr+c);
            }
        }else{
            backtrack(s,idx+1,lc,rc,balance,curr+c);
        }

        
    }
    vector<string> removeInvalidParentheses(string s) {
       
        int lc = 0, rc = 0;
        for(char c : s){
            if(c=='(') lc++;
            else if(c==')') {
                if(lc>0) lc--;
                else rc++;
            }
        }

        vector<string>ans;
        string curr ="";

        backtrack(s,0,lc,rc,0,"");
        return vector<string>(validSet.begin(), validSet.end());
    }
};