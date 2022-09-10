//1714A Everyone Loves To Sleep
//Problem Link: https://codeforces.com/contest/1714/problem/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;
        int minMin=INT_MAX;

        for(int i=0;i<n;i++)
        {
            int nh,nm;
            cin>>nh>>nm;
            int mn=0;

            if(nh>h)
            {
                int total_min=h*60+m;
                int total_min2=nh*60+nm;

                mn=total_min2-total_min;
            }

            else if(nh==h)
            {
                if(nm>=m)
                {
                    mn=nm-m;
                }
                else
                {
                    mn=24*60-(m-nm);
                }
            }

            else
            {
                mn=24*60-(h*60+m)+nh*60+nm;
            }

            minMin=min(minMin,mn);
        }

        cout<<minMin/60<<" "<<minMin%60<<endl;
    }
    return 0;
}