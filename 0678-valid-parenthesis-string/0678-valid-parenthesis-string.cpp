class Solution {
public:
    bool checkValidString(string s) {
        int cnt = 0, rcnt = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='('){
                cnt++;
                rcnt++;
            }else if(s[i]==')'){
                cnt--;
                rcnt--;
            }else{
                cnt--;
                rcnt++;
            }
            if(cnt<0) cnt=0;
            if(rcnt<0) return false;

        }
        return cnt==0;
    }
};