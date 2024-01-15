#pragma once
#include <vector>
#include <map>
using namespace std;

// --------------> Question <--------------
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.You may assume that the majority element always exists in the array.

// --------------> Examples <--------------
// Example 1:
//  Input: nums = [3, 2, 3]
//  Output : 3

// Example 2 :
//    Input : nums = [2, 2, 1, 1, 1, 2, 2]
//    Output : 2 

// --------------> Constraints <--------------
// n == nums.length
// 1 <= n <= 5 * 104
// -10^9 <= nums[i] <= 10^9

namespace Question169_Majority_Element
{
    class Solution
    {
    public:
        int majorityElement(vector<int>& nums)
        {
            map<int, int> elements;

            for (int i = 0; i < nums.size(); ++i)
            {
                auto it = elements.find(nums[i]);
                if (it != elements.end())
                {
                    it->second++;
                }
                else
                {
                    elements.insert(pair<int,int>(nums[i],1));
                }
            }

            int biggestValue = 0;
            int biggestKey = 0;

            for (auto& pair : elements)
            {
                if (pair.second > biggestValue)
                {
                    biggestValue = pair.second;
                    biggestKey = pair.first;
                }
            }

            return biggestKey;
        }
    };
}