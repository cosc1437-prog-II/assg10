---
name: 'Task 1: Implement `isSorted` Function'
about: Task 1 for Students
title: 'Task 1: Implement `isSorted()` Function'
labels: enhancement, good first issue
assignees: ''

---

**Description**

Write a function to determine if an array is sorted in ascending order or not.
The function should be called `isSorted()` and it will return a boolean
result of `true` if the array is sorted, and `false` if it is not.
You should pass in the number of values in the array to test as the
first parameter.  We are testing arrays of doubles in this assingment, so the
second parameter should be passed in as an array of `double` values.


**Suggested Solution**

1. Perform a `for` loop that will iterate from index 0 up to the
   1 less than the last valid index.  For example if numValues i 10,
   then the for loop should iterate from 0 up to 8.  The loop
   should not be entered when `numValues` is either 0 or 1 if you
   write it correctly.
   - Inside of the loop, test the current `index` and `index + 1` 
     locations.  If the value at `index` is larger, then it is out
	 of order, so you should immediately return `false` if you
	 detect this.
 2. But if the loop completes and never returns `false` then you
    know all values successfully tested as in the correct order, 
	so return `true` at the end of your function after the loop
	completes.

**Additional Requirements**

- The array of values should not be modified as a result of calling this function.  So
  you need to delcare the array to be a `const` parameter.
- You need to be careful not to make any bounds check errors in this function, so if
  the array `numValues` is 10, you should test if the value at index 8 is gretaer than 
  the value at index 9 if needed.  But it is an error to compare the values at indexes
  9 and 10 since the valid indexes for an array of size 10 are 0 to 9.
- You are required to handle the cases of an empty array (`numValues` is 0) and an
  array of a single value correctly.  You could just have a special case, but as 
  discussed, if you write the `for` loop correctly, it will not be entered when the
  number of values to be tested is 0 or 1.
