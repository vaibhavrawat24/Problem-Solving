//363. Max Sum of Rectangle No Larger Than K

//Time: O(min(m,n)^2.max(m,n).logmax(m,n))
//Space: O(max(m,n))

class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int res=INT_MIN,rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<cols;i++)
        {
            vector<int> sum(rows);
            for(int j=i;j<cols;j++)
            {
                for(int k=0;k<rows;k++)
                {
                    sum[k]+=matrix[k][j];
                }
                set<int> s={0};
                int run_sum=0;
                for(auto sum:sum)
                {
                    run_sum+=sum;
                    auto it=s.lower_bound(run_sum-k);
                    if(it != end(s))
                    {
                        res=max(res,run_sum-*it);
                    }
                    s.insert(run_sum);
                }
            }
        }
        return res;
        
    }
};