#pragma once
#include <string>
#include <iostream>
using namespace std;

// --------------> Question <--------------
// Given a string s consisting of wordsand spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non - space characters only.

// --------------> Examples <--------------
// Example 1:
//    Input: s = "Hello World"
//    Output : 5
//    Explanation : The last word is "World" with length 5.
//
// Example 2 :
//    Input : s = "   fly me   to   the moon  "
//    Output : 4
//    Explanation : The last word is "moon" with length 4.

// --------------> Constraints <--------------
// 1 <= s.length <= 10^4
// s consists of only English letters and spaces ' '.
// There will be at least one word in s.


class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        string lastWord;
        int start = 0;

        for (int i = s.length() - 1; i >= 0; --i)
        {
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0')
            {
                start = i + 1;
                break;
            }
        }

        int counter = 0;
        while (s[start + counter] != '\0' && s[start + counter] != ' ')
        {
            counter++;
        }
        lastWord = s.substr(start, counter);

        return lastWord.size();
    }
};
