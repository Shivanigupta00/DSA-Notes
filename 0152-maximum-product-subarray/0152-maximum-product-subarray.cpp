class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi =nums[0] ;
        int mini =nums[0] ;
        int ans = nums[0];
        for(int i = 1; i<n; i++){
            int curr = nums[i];
            if(curr <0) swap(maxi, mini);

            mini = min(curr, mini*curr);
            maxi = max(curr, maxi*curr);

            ans = max(ans, maxi);
        }
        return ans;
    }
};