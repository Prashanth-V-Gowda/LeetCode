/*
Prashanth V Gowda
01/12/2024

Given an interger x, return true if x is a plaindrome, 
and false otherwise

Input: 121
Output: true

Input: -121
Output: false

Input: 10
Output: false
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x)
{
    if (x < 0 || (x && (x % 10) == 0))
    {
        return false;
    }

    int copyOfx = x;
    int reverseOfx = 0;
    while (x != 0) //Time complexity is O(log10(n))
    {
        int rem = x % 10;
        reverseOfx = reverseOfx * 10 + rem;
        x = floor(x / 10);
    }
    if (copyOfx == reverseOfx)
        return true;
    else
        return false;

}

int main(void)
{
    int i = 121;
    bool result = isPalindrome(i);
    if (result)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}