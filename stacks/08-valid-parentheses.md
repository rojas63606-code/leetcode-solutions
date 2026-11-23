
# Valid Parentheses

**Difficulty:** Easy

**Problem Link:** https://leetcode.com/problems/valid-parentheses/

**Approach:**
Use a stack to store opening brackets. When a closing bracket appears, check whether it matches the top opening bracket. If all brackets match and the stack is empty at the end, return true.

**Time Complexity:** O(n)

**Space Complexity:** O(n)

**Notes:** The stack follows the LIFO (Last In, First Out) principle.
