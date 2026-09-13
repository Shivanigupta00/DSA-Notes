class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int maxi = 1;
        unordered_set<int>s;

        for(int num:nums){
            s.insert(num);
        }

        for(auto it : s){
            if(s.find(it-1)==s.end()){
                int cnt = 1;
                int x = it;

                while(s.find(x+1) != s.end()){
                    x++;
                    cnt++;
                }
                maxi = max(maxi, cnt);

            }
        }
        return maxi;
    }
};