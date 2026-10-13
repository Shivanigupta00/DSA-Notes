class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] <0){
                nums[i]*=-1;
            }

        }
        sort(nums.begin(),nums.end());
        long long ans = 0;
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            ans += (nums[r]*nums[r]);
            if(l!=r){
                ans -= (nums[l]*nums[l]);
            }
            l++;
            r--;

        }
        return ans;
    }
};