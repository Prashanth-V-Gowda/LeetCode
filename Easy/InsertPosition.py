'''
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. If not, return the index
where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4

'''

def searchInsert(numList, target: int):

    lowIndex = 0  
    highIndex = len(numList) - 1
    while (lowIndex <= highIndex):
        midIndex = lowIndex + (highIndex - lowIndex) // 2
        if numList[midIndex] == target:
            return midIndex
        elif numList[midIndex] < target:
            lowIndex = midIndex + 1
        else:
            highIndex = midIndex - 1
    return lowIndex

        
numList = [1,3,5,6]
target = 2

resultPrint = searchInsert(numList, target)
print(resultPrint)
