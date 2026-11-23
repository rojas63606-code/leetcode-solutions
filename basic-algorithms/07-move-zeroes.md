# Move Zeroes

**Difficulty:** Easy

**Problem Link:** https://leetcode.com/problems/move-zeroes/

**Approach:**

Use a variable called position to track where the next non-zero element should go. Move all non-zero elements to the beginning of the array and fill the remaining positions with zeros.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

**Notes:** The solution modifies the original array without using an extra array.