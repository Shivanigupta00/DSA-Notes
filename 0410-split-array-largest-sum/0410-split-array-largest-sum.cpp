class Solution {
public:
    int countRequiredSubarr(vector<int>&nums, int splits){
        int subarrCount = 1;
        int CurrSum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(CurrSum + nums[i] <=splits){
                CurrSum +=nums[i];
            }else{
                subarrCount++;
                CurrSum = nums[i];
            }
        }
        return subarrCount;
    }
    int splitArray(vector<int>& nums, int k) {
        int low =*max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        if(nums.size()<k) return -1;
        int ans = -1;
        while(low<=high){
            int mid = low+(high-low)/2;

            int required_subarr = countRequiredSubarr(nums,mid);
            if(required_subarr >k){
                low = mid+1;
            }else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};