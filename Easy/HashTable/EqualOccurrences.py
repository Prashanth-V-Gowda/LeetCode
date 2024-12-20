'''
Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

 

Example 1:

Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.
Example 2:

Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.

'''

def areOccurrencesEqual(s: str) -> bool:

    hashTable = {}
    for index, indexValue in enumerate(s):
        if indexValue not in hashTable:
            hashTable[indexValue] = 1
        else:
            hashTable[indexValue] = hashTable[indexValue] + 1
    comparingList = list(hashTable.values())
    if len(set(comparingList)) == 1:
        return True
    else:
        return False

string = "abacbc"
result = areOccurrencesEqual(string)
print(result)
