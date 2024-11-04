/** @file assg10-library.cpp
 *
 * @brief Implementation file for Assignment 10: Arrays: Searching and Sorting
 *
 * @author Jane Programmer
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 04, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include "assg10-library.hpp"

/** @brief Test if array is already sorted
 *
 * Given an array of double values, test if the array is already
 * in sorted order or not.  We do this by starting at index 0 and
 * testing if the value in index 0 is less than or equal to the value
 * in index 1.  If it is the items in indexes 0 and 1 are in the
 * correct order, and we go on to test indexes 1 and 2, etc.  If we
 * ever find values that are not in order (the value in the lower index
 * is larger than the value in the index above it) then we return
 * false, the array is not sorted.  Only if all values are in the correct
 * order do we return true.
 *
 * NOTE: as is tested, this function should work with size 0 and 1 arrays
 * correctly.  In both cases, an empty array or an array of 1 value is
 * considered by definition to be sorted.
 *
 * @param numValues The number of values in the array we are testing.
 * @param values An array of double values we are to test to see if they
 *   are already sorted or not.
 *
 * @returns bool True is returned if the given array is already sorted, and
 *   false is returned if we detect any values that are not in correct ascending
 *   sorted order.
 */
// task 1 implementation of isSorted() goes here

/** @brief Test if two arrays are equal or not
 *
 * Given two arrays of doubles, test if the arrays are equivalent or not.
 * This is done be testing if all values are equal in the arrays at each
 * index of the given arrays.
 *
 * NOTE: as is tested, this function should work with size 0 and 1 arrays
 * correctly.
 *
 * @param numValues The number of values in the arrays we are testing.
 * @param values1 The first array of doubles to be tested
 * @param values2 The second array of values to be tested
 *
 * @returns bool True is returned if the values are (approximately) equal
 *   in all indexes for the two given arrays, and false is returned if any
 *   of the values are not the same in the arrays.
 */
// task 2 implementation of areEqual() goes here

/** @brief Sort the values using bubble sort
 *
 * Implement a sort function/algorithm from our text (bubble sort, insertion sort
 * or selection sort, for an array of double values in the context of
 * this assignment.  This function should work correctly for empty
 * (numValues == 0) and sized 1 arrays, which are both sorted by
 * definition.  The values array is not declared to be a const parameter
 * for this task, because we will potentially move items around in the
 * array when sorthing it.
 *
 * NOTE: as is tested, this function should work with size 0 and 1 arrays
 * correctly.  In both cases, an empty array or an array of 1 value should
 * not need any work done as they are already sorted.
 *
 * @param numValues The number of values in the array to be sorted.
 * @param values An array of double values that will be sorted by this
 *   function.
 */
// task 3 implemenation of your sort() function goes here

/** @brief Search for value using binary search
 *
 * Implement the binary search given in our text, but searching for the
 * location of a double searchValue in an array of double values.
 * But before the search is performed, the array is tested and sorted if
 * needed, so calling this function does not assume that the array is
 * sorted before hand, and will sort the array if needed before
 * performing the search.
 *
 * NOTE: as is tested, this function should work with size 0 and 1 arrays
 * correctly.
 *
 * @param numValues The number of values in the array potentially sorted and
 *   then searched.
 * @param values An array of double values that will be sorted if needed and
 *   and then a binary search will be performed for the indicated value to
 *   search for.
 * @param searchValue A double value to search for in the array of values
 *   passed into this function.
 *
 * @returns int Returns the integer index location of the searchValue if it
 *   is found in the array.  The constant NOT_FOUND is returned for an
 *   unsuccessful search.  The array of values will be implicitly sorted
 *   on return if it is not sorted when this function is called.
 */
// task 4 implementaiton of your binary searhc() function goes here
