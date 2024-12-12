/*
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

*/
#include <stdio.h>
#include <math.h>


int searchInsert(int* nums, int numsSize, int target)
 {

    int lowIndex = 0;
    int highIndex = numsSize - 1;
    int midIndex = 0;

    while(lowIndex <= highIndex)
    {
        midIndex = lowIndex + (highIndex - lowIndex) / 2;

        if (nums[midIndex] == target)
        {
            return midIndex;
        }
        else if (nums[midIndex] > target)
        {
            highIndex = midIndex - 1;
        }
        else
        {
            lowIndex = midIndex + 1;
        }
    }
    return lowIndex;
 }

int main(void)
{
    int nums[] = {-1,3,5,6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    int result = searchInsert(nums, numsSize, target);
    printf("%d", result);

    return 0;
}