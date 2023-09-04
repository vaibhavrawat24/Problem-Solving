// 1861A. Prime Deletion
// Problem Link: https://codeforces.com/contest/1861/problem/A

// Time Complexity: O(n)
// Space Complexity: O(1)

// KEEP MOVING FORWARD !

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template <class T>
using mxpq = priority_queue<T>;
template <class T>
using mnpq = priority_queue<T, vector<T>, greater<T>>;

bool prime(int n)
{
    vector<int> prime(n + 1, true);
    prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = 2 * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    if (prime[n] == true)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        cout << ((s.find('1') < s.find('3')) ? 13 : 31) << endl;
    }

    return 0;
}