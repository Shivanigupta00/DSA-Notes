class Solution {
public:
    void solve(int left , int right , string s,int n,vector<string>&ans){
        if(left == right && left+right == n*2){
            ans.push_back(s);
            return;
        }
        //explore 
        if(left<n){
            solve(left+1, right, s+'(',n,ans);

        }
        if(right <left){
            solve(left, right+1, s+')',n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(0,0,"",n,ans);
        return ans;
    }
};