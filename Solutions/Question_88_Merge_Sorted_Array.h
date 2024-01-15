#pragma once
#include <vector>
#include <algorithm>
using namespace std;


namespace Question_88_Merge_Sorted_Array
{
    class Solution
    {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
        {
            int k = 0;
            if (m == 0)
            {
                nums1 = nums2;
            }
            else if (n == 0)
            {
                nums1 = nums1;
            }
            else {
                for (int i = m; i < nums1.size(); i++)
                {
                    nums1[i] = (nums2[k++]);
                }
                sort(nums1.begin(), nums1.end());
            }
        }
    };
}