//1768A. Greatest Convex
//Problem Link: https://codeforces.com/contest/1768/problem/A

//Time Complexity:
//Space Complexity:

#include <iostream>
using namespace std;

int factorial(int n) {
int result = 1;
for (int i = 1; i <= n; i++) {
result *= i;
}
return result;
}

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin >> k;
        int x = k - 1;
        while (factorial(x) + factorial(x - 1) % k != 0)
        {
            x--;
            if (x == 1) 
            {
            cout << "No such x exists" << endl;
            break;
            }
        }
        cout << x << endl;
    }
    return 0;
}