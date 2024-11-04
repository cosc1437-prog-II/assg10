---
name: 'Task 4: Implement `search()` Function'
about: Task 4 for Students
title: 'Task 4: Implement `search()` Function'
labels: enhancement
assignees: ''

---

**Description**

Implement a binary `search()` function.  Our textbook gives an implementation of the binary search in chapter 16.  We are making a few modifications to this function.

First of all we will be searching an array of `double` values.  Also we are not going to assume that the array is sorted before this function is called.  So as described in the assignment, you need to reuse your `isSorted()` function before doing the search to see if the array is not yet sorted, and if it is not sorted, you should reuse your `sort()` to sort the values.  Binary search requires that the values be sorted in order to work, so it is required that you check and sort the values if necessary here.

Also since it is possible that the array will need to be sorted, you should not pass in the array of double values as a `const` parameter for your version of the binary search.  Just pass it in as a regular (non constant) value, so that it can be sorted if needed.

Otherwise you should modify the binary search implementation given in our text to perform the actual search.  You need to search an array of `double` values, and the value you are searching for will also therefore be a `double`.

And finally, our textbook uses a magic number `-1` to indicated a failed search.  Instead for this code we have declared a global constant in the library header file called `NOT_FOUND`.  You are required to use this named constant rather than the magic number `-1` in your code (see the task 4 tests for example).

**Suggested Solution**


**Additional Requirements**

- The array of values needs to be tested and sorted if necessary.  You are required to 
  reuse your `isSorted()` and `sort()` functions from the previous tasks to do this
  first in your search function.
- Since the array of values might be sorted by calling this function, you cannot 
  declare the array to be a `const` parameter as is done in our textbook.
- Otherwise you are required to modify the textbook implementation, after checking and
  sorting if needed, to implement the binary search of the array.

