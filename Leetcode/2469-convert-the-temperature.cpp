//2469. Convert the Temperature
//Problem Link: https://leetcode.com/contest/weekly-contest-319/problems/convert-the-temperature/

//Time Complexity: O(1)
//Space Complexity: O(n)

#define pb push_back

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> temp;
        temp.pb(celsius+273.15);
        temp.pb((celsius*1.8)+32);
        
        return temp;
    }
};