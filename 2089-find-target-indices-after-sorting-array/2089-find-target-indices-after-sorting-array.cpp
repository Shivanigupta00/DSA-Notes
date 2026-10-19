class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int grcnt = 0, smllcnt=0;
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
           if(nums[i]<target){
            smllcnt++;
           }else if(nums[i]>target){
            grcnt++;
           }
        }

        int n = nums.size()-grcnt-smllcnt;
        for(int i = 0; i<n; i++){
            ans.push_back(i+smllcnt);
        }
        return ans;
    }
};