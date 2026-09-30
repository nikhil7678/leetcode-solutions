# Problem 7: Valid Parentheses (Easy)

Link: https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to check whether the brackets are properly matched.

When I find an opening bracket, I push it onto the stack.

When I find a closing bracket, I check whether it matches the most recent opening bracket.

If the brackets do not match, I return false.

At the end, the stack must be empty for the string to be valid.

## Complexity

Time: O(n)

Space: O(n)

## Test Cases

1. "()" → true
2. "()[]{}" → true
3. "(]" → false
4. "([{}])" → true