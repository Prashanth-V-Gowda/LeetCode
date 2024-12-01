'''
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

Testing comment
'''
def isPalindrome(x: int) -> bool:
    if i < 0 or (i and i % 10 == 0):
        return False
    
    copyOfx = x
    reverseOfx = 0

    while(x != 0): #Time complexity is O(log10(n))
        rem = x % 10
        reverseOfx = reverseOfx * 10 + rem
        x //= 10
    if (reverseOfx == copyOfx):
        return True
    else:
        return False


i = 12221
result = isPalindrome(i)
print(result)