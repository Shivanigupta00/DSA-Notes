class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int lastone = 3;
        int secondLastone = 2;
        int curr = 0;
        for(int i = 3; i<n; i++){
            curr = lastone + secondLastone;
            secondLastone = lastone;
            lastone = curr;
        }
        return curr;
    }
};