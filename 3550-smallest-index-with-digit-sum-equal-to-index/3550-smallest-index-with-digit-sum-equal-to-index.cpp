class Solution {
public:
    int solve(int num){
        int digit= 0;
        while(num>0){
            digit += num %10;
            num = num/10;
        }
        return digit;
    }
    int smallestIndex(vector<int>& nums) {
        int n= nums.size();
        for(int i =0; i<n; i++){
            if(solve(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};