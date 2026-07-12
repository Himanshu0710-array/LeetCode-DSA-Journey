class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h1 = stoi(startTime.substr(0,2));
        int h2 = stoi(endTime.substr(0,2));
        int m1 = stoi(startTime.substr(3,2));
        int m2 = stoi(endTime.substr(3,2));
        int s1 = stoi(startTime.substr(6,2));
        int s2 = stoi(endTime.substr(6,2));
        int a = h2-h1;
        int b = m2-m1;
        int c = s2-s1;
        return 3600*a + 60*b + 1*c;

    }
};