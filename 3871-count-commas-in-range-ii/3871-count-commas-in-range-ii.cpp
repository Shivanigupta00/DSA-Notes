class Solution {
public:
    long long countCommas(long long n) {
        long long totalcommas = 0;
        long long threshold = 1000;

        while(n>=threshold){
            totalcommas +=(n-threshold +1);

            //move to 10^6,10^9,10^12,10^15
            if(threshold > LLONG_MAX /1000) break;
            threshold*=1000;
        }
        return totalcommas;
    
    }
};