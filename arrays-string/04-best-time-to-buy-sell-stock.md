# Problem 4: Best Time to Buy and Sell Stock (Easy)

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I used a single pass through the prices array.

I maintained the minimum price seen so far and calculated the profit at each step by subtracting the minimum price from the current price.

I updated the maximum profit whenever a larger profit was found.

If no positive profit was possible, the result remained zero.

## Complexity

Time: O(n)

Space: O(1)

## Test Cases

1. [7, 1, 5, 3, 6, 4] → 5
2. [7, 6, 4, 3, 1] → 0
3. [2, 4, 1] → 2