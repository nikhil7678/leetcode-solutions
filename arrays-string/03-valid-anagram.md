# Problem 3: Valid Anagram (Easy)

Link: https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency array of size 26 to count the occurrences of each lowercase English letter.

I increased the count for each character in the first string and decreased it for each character in the second string.

If all counts are zero, the two strings are anagrams. Otherwise, they are not anagrams.

## Complexity

Time: O(n)

Space: O(1)

## Test Cases

1. anagram, nagaram → true
2. rat, car → false
3. listen, silent → true