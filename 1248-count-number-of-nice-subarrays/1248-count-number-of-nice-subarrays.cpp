class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k){
        return solve(nums,k)-solve(nums,k-1);
    }
    int solve(vector<int>& nums, int k) {
        int l =0;
        int oddcnt=0;
        int total=0;
        for(int r=0; r<nums.size();r++ ){
            if(nums[r] %2 ==1) oddcnt++;
            while(oddcnt > k){
                if(nums[l] %2 ==1) oddcnt--;
                l++;
            }
            total += r-l+1;
        }
        return total;
    }
};
/* 
l = 1, r = 4 oddcnt = 3 r-l+1=4
total = 1+2+3+4+4=14

k = 2 l = 2 r = 4 oddcnt = 2 r-l+1 = 3
total=1+2+3+3+3=12
*/