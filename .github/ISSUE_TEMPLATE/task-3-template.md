---
name: 'Task 3: Implement `sort()` Function'
about: Task 3 for Students
title: 'Task 3: Implement `sort()` Function'
labels: enhancement
assignees: ''

---

**Description**

Implement a `sort()` function to sort an array of `double` values into ascending
order.  You can use any of the three sorts given in our Malik textbook: bubble sort,
insertion sort or selection sort.  The function must be named `sort()` as that is
what the tests expect.  The first parameter should be an `int` indicating the number
of values in the array to be sorted, and the second parameter should be an array of
`double` values.  Since the values in the array will be moved/modified, the array
will not be declared to be a `const` parameter for this function.  The sort
functions are `void` functions, they do not return an explicit result.  Instead the
result is returned implicitely by modifying the array of values to be sorted upon
return.

**Suggested Solution**

Our textbook presents implementations of the three sorts mentioned.  You can choose any
of them to implement.  You need to make some small modifications to get the function
to work for this assignment, including using arrays of `double` values to be sorted, and
passing in the array size as the first parameter, and the array as the second.  You could
also consider copying and reusing your `swap()` function from a previous assignment or
the swap function in the C++ standard library, instead of performing the swap by hand
using the 3 operations and a temporary variable.

**Additional Requirements**

- You are required to use/modify the textbook implementation of either bubble sort,
  selection sort, or insertion sort.  You cannot use some other sorting alrogirhm, and
  your code should be basically a modification of the implementation given in our text.
- The sort needs to be modified to sort an array of doubles, and to pass in the parameters
  in the expected order of the tests of it.
- The function is required to be named `sort()` so that you do not have to modify the
  test file to call it.
- Your function will handle 0 sized (empty) and arrays with only a single value if you
  copy the implementation from our textbook correctly.

