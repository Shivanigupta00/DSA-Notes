class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int cur = 0;
        for(int  num:nums){
            cur += num;

            maxi = max(cur,maxi);
            if(cur<0){
                cur=0;
            }
        }
        return maxi;
    }
};