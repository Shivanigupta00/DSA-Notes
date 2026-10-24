class Solution {
public:
    int func(string d, vector<int>&days){
        int m = stoi(d.substr(0,2));
        int day = stoi(d.substr(3,2));
        int sum = day;
        for(int i= 0; i<m-1; i++){
            sum+=days[i];
        }
        return sum;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);

        if(start >end) return 0;

        vector<int>days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        return func(end, days) - func(start, days) +1;
    }
};