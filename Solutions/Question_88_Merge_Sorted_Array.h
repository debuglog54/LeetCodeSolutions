#pragma once
#include <vector>
#include <algorithm>
using namespace std;

// --------------> Question <--------------

//You are given two integer arrays nums1and nums2, sorted in non - decreasing order, and two integers mand n, representing the number of elements in nums1and nums2 respectively.
//Merge nums1and nums2 into a single array sorted in non - decreasing order.
//The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
//To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored.nums2 has a length of n.

// --------------> Examples <--------------

//Example 1:
//Input: nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
//Output : [1, 2, 2, 3, 5, 6]
//Explanation : The arrays we are merging are[1, 2, 3] and [2, 5, 6].
//The result of the merge is[1, 2, 2, 3, 5, 6] with the underlined elements coming from nums1.

//Example 2 :
//    Input : nums1 = [1], m = 1, nums2 = [], n = 0
//    Output : [1]
//    Explanation : The arrays we are merging are[1] and [].
//    The result of the merge is[1].

// --------------> Constraints <--------------

//nums1.length == m + n
//nums2.length == n
//0 <= m, n <= 200
//1 <= m + n <= 200
//- 10^9 <= nums1[i], nums2[j] <= 10^9

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
            else 
            {
                for (int i = m; i < nums1.size(); i++)
                {
                    nums1[i] = (nums2[k++]);
                }
                sort(nums1.begin(), nums1.end());
            }
        }
    };
}