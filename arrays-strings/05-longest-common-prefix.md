# Longest Common Prefix

**Difficulty:** Easy

**Problem Link:** https://leetcode.com/problems/longest-common-prefix/

**Approach:**

Take the first string as the reference. Compare its characters with the other strings one by one. Stop when a mismatch occurs and return the common prefix.

**Time Complexity:** O(n × m), where n is the number of strings and m is the length of the shortest string.

**Space Complexity:** O(1) auxiliary space.

**Notes:** The solution uses character-by-character comparison.