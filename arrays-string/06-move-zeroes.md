# Problem 6: Move Zeroes (Easy)

Link: https://leetcode.com/problems/move-zeroes/

## Approach

I used a position pointer to keep track of where the next non-zero element should go.

I traversed the array and moved every non-zero element to the front while maintaining its original order.

After that, I filled the remaining positions with zeroes.

## Complexity

Time: O(n)

Space: O(1)

## Test Cases

1. [0, 1, 0, 3, 12] → [1, 3, 12, 0, 0]
2. [0] → [0]
3. [1, 2, 3] → [1, 2, 3]