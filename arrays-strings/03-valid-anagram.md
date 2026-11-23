# Valid Anagram

**Difficulty:** Easy

**Problem Link:** https://leetcode.com/problems/valid-anagram/

**Approach:**

Use an array of 26 elements to count the frequency of each lowercase letter. Increase the count for the first string and decrease it for the second string. If all counts are zero, both strings are anagrams.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

**Notes:** The solution uses a frequency-counting technique.