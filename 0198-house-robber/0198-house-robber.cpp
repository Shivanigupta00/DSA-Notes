class Solution {
public:
    int memo[102];
    int solve(int i , vector<int>&nums, int n){
        if(i==n) return 0;

        if(memo[i] != -1) return memo[i];
        int take = 0;
        if(i<n){
            take = max(nums[i]+ solve(i+2, nums,n),solve(i+1,nums,n));
        }
        return memo[i]=take;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(memo,-1,sizeof(memo));
        return solve(0, nums,n);
    }
};