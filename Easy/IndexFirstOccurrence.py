'''
Prashanth V Gowda
01/12/2024

Given teo strings needle and haystack, return the index of the first occurrence of 
needle in haystack, or -1 if needle is not part of haystack. 

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

'''

def firstOccurrrence(haystack: str, needle: str):
    foundSubstring = False
    startIndexOfString = 0
    endIndexOfString = startIndexOfString + len(needle)
    
    while(endIndexOfString <= len(haystack)):
        if haystack[startIndexOfString:endIndexOfString] == needle:
            foundSubstring = True
            break
        else:
            foundSubstring = False
        startIndexOfString += 1
        endIndexOfString += 1

    if foundSubstring:
        return startIndexOfString
    else:
        return -1


# haystack = "a"
# needle = "a"

# haystack = "hello"
# needle = "ll"

# haystack = "leetcode"
# needle = "leeto"

haystack = "sadbutsad"
needle = "sad"

returnResult = firstOccurrrence(haystack, needle)
print(returnResult)