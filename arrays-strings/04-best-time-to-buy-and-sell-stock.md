# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**Problem Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

**Approach:**

Track the minimum stock price seen so far. Calculate the profit for each day and update the maximum profit whenever a better profit is found.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

**Notes:** Buy before selling. The solution uses a single traversal of the array.