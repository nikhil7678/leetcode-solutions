# Problem 8: Binary Search (Easy)

Link: https://leetcode.com/problems/binary-search/

## Approach

I used binary search to find the target in a sorted array.

I maintained two pointers, left and right, to represent the current search range.

I calculated the middle index and compared the middle element with the target.

If the middle element matched the target, I returned its index.

If the target was larger, I searched the right half. Otherwise, I searched the left half.

If the target was not found, I returned -1.

## Complexity

Time: O(log n)

Space: O(1)

## Test Cases

1. [-1, 0, 3, 5, 9, 12], target = 9 → 4
2. [-1, 0, 3, 5, 9, 12], target = 2 → -1