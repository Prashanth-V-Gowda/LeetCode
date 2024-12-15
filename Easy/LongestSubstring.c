/*
Given a string s, find the length of the longest 
substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
*/

#include <stdio.h>
#include <string.h>

int longestSubstring(char *s)
{
    int leftIndex = 0;
    int rightIndex = 0;
    int maxLengthSubstring = 0;
    int charString[256] = {0};
    int stringLength = strlen(s);

    while (rightIndex < stringLength)
    {
        charString[s[rightIndex]] ++;

        if (charString[s[rightIndex]] > 1)
        {
            while(s[rightIndex] != s[leftIndex])
            {
                charString[s[leftIndex]] --;
                leftIndex ++;
            }
            charString[s[leftIndex]] --;
            leftIndex++;
        }
        else
        {
            if (rightIndex - leftIndex + 1 > maxLengthSubstring)
            {
                maxLengthSubstring = rightIndex - leftIndex + 1;
            }
        }
        rightIndex ++;
        
    }
    return maxLengthSubstring;
}

int main()
{
    char s[] = "abcabcbb";
    int longestSubstringResult = longestSubstring(s);
    printf("%d", longestSubstringResult);

    return 0;
}