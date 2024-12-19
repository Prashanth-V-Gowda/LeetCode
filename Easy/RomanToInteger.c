/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int value(char integerValue)
// {
//     switch (integerValue)
//     {
//     case 'I': return 1;
//     case 'V': return 5;
//     case 'X': return 10;
//     case 'L': return 50;
//     case 'C': return 100;
//     case 'D': return 500;
//     case 'M': return 1000;
//     default: return 0;
//     }
// }

// void stringReverse(char* string)
// {
//     int startIndex = 0;
//     int endIndex = strlen(string) - 1;
//     char tempString;

//     while(startIndex < endIndex)
//     {
//         tempString = string[startIndex];
//         string[startIndex] = string[endIndex];
//         string[endIndex] = tempString;

//         startIndex ++;
//         endIndex --;
//     }
// }

// int romanInteger(char* string)
// {
//     int result_integer = 0, previous_value = 0;
//     stringReverse(string);
//     int stringLength = strlen(string);

//     for(int i = 0; i < stringLength; i++)
//     {
//         int current_value = value(string[i]);

//         if (current_value < previous_value)
//         {
//             result_integer -= current_value;
//         }
//         else
//         {
//             result_integer += current_value;
//         }
//     previous_value = current_value;
//     }
//     return result_integer;
// }

int value(char integerValue)
{
    switch (integerValue)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}
void stringReverse(char* string)
{
    int startIndex = 0;
    int endIndex = strlen(string) - 1;
    char tempString;

    while(startIndex < endIndex)
    {
        tempString = string[startIndex];
        string[startIndex] = string[endIndex];
        string[endIndex] = tempString;

        startIndex ++;
        endIndex --;
    }
}
int romanToInt(char* s)
{
   int result_integer = 0, previous_value = 0;
   stringReverse(s);
   int stringLength = strlen(s); 

   for(int i = 0; i < stringLength; i++)
   {
    int current_value = value(s[i]);
    if (current_value < previous_value)
    {
        result_integer -= current_value;
    }
    else
    {
        result_integer += current_value;
    }
    previous_value = current_value;
   }
   return result_integer;
}


int main()
{
    char string[] = "MCMXCIV";

    int integerValue = romanToInt(string);

    printf("%d", integerValue);

    return 0;
}