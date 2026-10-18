class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int curr_el = INT_MIN;
        for(int i = 0; i<n; i++){
            if(count == 0 ){
                count = 1;
                curr_el = nums[i];
            }else if(curr_el == nums[i]){
                count++;
            }else{
                count--;
            }

        }
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(curr_el == nums[i]){
                cnt++;
            }
        }
        if(cnt >n/2){
            return curr_el;
        }
        return 0;
    }
};