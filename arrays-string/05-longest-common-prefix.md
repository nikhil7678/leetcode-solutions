# Problem 5: Longest Common Prefix (Easy)

Link: https://leetcode.com/problems/longest-common-prefix/

## Approach

I compared the characters of the first string with the other strings one by one. The common prefix length is reduced whenever a mismatch is found.

## Complexity

Time: O(n × m)

Space: O(1)

## Test Cases

1. ["flower", "flow", "flight"] → "fl"
2. ["dog", "racecar", "car"] → No common prefix