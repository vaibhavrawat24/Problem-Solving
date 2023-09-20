// 349. Intersection of Two Arrays
// Problem Link: https://chat.openai.com/c/1f3b6754-cd53-4113-9d2f-43c72bcedb43

// Time Complexity: O(m+n)
// Space Complexity: O(min(m,n))

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> interset;

        for (int num : nums2)
        {
            if (set1.count(num))
                interset.insert(num);
        }

        vector<int> v(interset.begin(), interset.end());

        return v;
    }
};