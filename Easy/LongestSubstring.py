'''
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
'''
from collections import Counter

def longestSubstring(string: str) -> int:
    charCount = Counter()
    leftIndex = 0
    rightIndex = 0
    lengthSubstring = 0

    while(rightIndex < len(string)):
        charCount[string[rightIndex]] += 1

        while charCount[string[rightIndex]] > 1:
           charCount[string[leftIndex]] -= 1
           leftIndex += 1 
        
        if (rightIndex - leftIndex + 1 > lengthSubstring):
            lengthSubstring = rightIndex - leftIndex + 1

        rightIndex += 1

    return lengthSubstring

string = "abbcdafeeg"

nonRepeatingLongestSubString = longestSubstring(string)
print(nonRepeatingLongestSubString)
