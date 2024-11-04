---
name: 'Task 2: Implement `areEqual()` Function'
about: Task 2 for Students
title: 'Task 2: Implement `areEqual()` Function'
labels: enhancement
assignees: ''

---

**Description**

The second task is to implement the `areEqual()` function.  This function
takes two arrays of `double` as input and returns a boolean result of `true`
if all of the values at all indexes in the arrays are the same, and `false`
if any of them differ.  Both arrays should not be modified when calling this
function, so they should be passed in as `const` parameters.  Also you can
assume that that the arrays of doubles have the same number of values.  The
number of values should be passed in as the first parameter to this function.


**Suggested Solution**

1. Perform a `for` loop over all of the indexes 0 to `numValues`
   of the two arrays.  If the passed in arrays are empty, then
   `numValues` will be 0, and your loop should not execute
   any iterations in that case.
   - In the loop, test each value at each index to see if it is
     equal in the two arrays passed into this function.  If you find
	 any two values that are not equal, just immediately return a
	 result of `false`.
2. Then after the loop finishes, if no values were detected that were
   not equal, you should return `true` because all of the values tested
   as being equal.

**Additional Requirements**

- The two arrays of values should not be modified as a result of
  calling this function.  So you need to delcare the arrays to be a
  `const` parameter.
- Your function should correctly handle the cases where the arrays are
  empty (number of values is 0), in which case by definition the arrays
  are considered equal by default.

