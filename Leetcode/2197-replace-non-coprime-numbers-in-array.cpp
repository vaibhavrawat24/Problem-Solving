//2197. Replace Non-Coprime Numbers in Array
//Problem Link: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/

//Time Complexity: O(n)
//Space Complexity: O(n)

#define ll long long

class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        
        for(int i=0;i<n;i++)
        {
            
           st.push(nums[i]);
            
           while(st.size()>1)
           {
                ll a=st.top();
                st.pop();
                ll b=st.top();
                st.pop();
                
                if(__gcd(a,b)>1)
                {
                    st.push(lcm(a,b));
                }
                else
                {
                    st.push(b);
                    st.push(a);
                    break;
                }
            
            }
        }
        
        vector<int> ans;
        while(!st.empty())
        {
            int x = st.top();
            ans.push_back(x);
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};