class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            int  index = 26-(s[i]-'a');
            int prod = (i+1)*index;
            sum+=prod;
        }
        return sum;
    }
};