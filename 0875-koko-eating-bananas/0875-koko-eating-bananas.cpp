class Solution {
public:
    bool CanEatAll(vector<int>&piles, int mid, int h){
        int actualhrs =0;

        for(int &x : piles){
            actualhrs +=x/mid; // hours

            if(x%mid != 0){
                actualhrs++;
            }
        }
        return actualhrs<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        //in 1 hr mei kitna minimum no of banana khaye ki she eats all of them
        int n  = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = INT_MAX;
        while(low< high){
            int mid = low+(high-low)/2;  //per hour  koko can eat mid number of banans

            if(CanEatAll(piles, mid, h)){
                high = mid;
            }else{
                low = mid+1;
            }

        }
        return low;
    }
};