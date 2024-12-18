/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]
*/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize= 2;
    int* return_nums = (int*)malloc(*returnSize * sizeof(int));

    for(int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return_nums[0] = i;
                return_nums[1] = j;
                return return_nums;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}


int main()
{
    int nums[] = {2,7,11,15};

    int size_of_nums = sizeof(nums) / sizeof(int);

    int target = 9;

    int returnSize = 2;

    int* return_nums = twoSum(nums, size_of_nums, target, &returnSize);

    printf("[%d, %d]\n", return_nums[0], return_nums[1]);

    free(return_nums);

    return 0;
}