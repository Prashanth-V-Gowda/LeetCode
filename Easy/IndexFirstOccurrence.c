/*

Prashanth V Gowda
03/12/2024

Given teo strings needle and haystack, return the index of the first occurrence of 
needle in haystack, or -1 if needle is not part of haystack. 

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int firstOccurrence(char *haystack, char *needle)
{
    int stringLengthNeedle = strlen(needle);
    int stringLengthHaystack = strlen(haystack);
    bool foundString = false;
    int startSubString = 0;
    int endSubString = startSubString + stringLengthNeedle;

    while (endSubString <= stringLengthHaystack)
    {
        char *stringToCompare = &haystack[startSubString];
        stringToCompare[endSubString - startSubString] = '\0';

        if (strcmp(stringToCompare, needle))
        {
            foundString = true;
            break;   
        }
        else 
        {
            foundString = false;
        }
        startSubString++;
        endSubString++;
    }
    if (foundString)
    {
        return startSubString;
    }
    else
    {
        return -1;
    }

}

int main(void)
{
    char haystack[] = "sadbutsad";
    char needle[] = "sad";
    // int start = 0;
    // int end = start + strlen(needle);
    // printf("%d", end);

    // char *substring = &haystack[start];
    // substring[end - start] = '\0';
    // for (int i=0; i < strlen(substring); i++)
    // {
    //     printf("%c", substring[i]);
    // }

    firstOccurrence(haystack, needle);

    if (firstOccurrence == 0)
    {
        printf("found");
    }
    else{
        printf("not found");
    }

    return 0;
}