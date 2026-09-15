class Solution {
public:
    bool palindrom(string &s,int left, int right){
        while(left <right){
            if(s[left]!= s[right])return false;
            left++;
            right--;
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int n = s.size();
        int i = 0;   
        int cnt = 0;

        while(i<=n-k){
            if(palindrom(s,i,i+k-1)){
                cnt++;
                i+=k;
            }else if(i+k<n && palindrom(s, i,i+k)){
                cnt++;
                i += k+1;
            }else{
                i++;
            }
        }
        return cnt;
    }
};