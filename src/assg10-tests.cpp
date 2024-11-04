/** @file assg10-tests.cpp
 *
 * @brief Unit tests for Assignment 10: Arrays: Searching and Sorting
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 04, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg10-library.hpp"
#include "catch.hpp"
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3
#undef task4

/** Task 1: isSorted() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the isSorted() function.
 */
#ifdef task1
TEST_CASE("<isSorted()> function tests", "[task1]")
{
  SECTION("test empty and sized 1 arrays are sorted by definition")
  {
    // can't actually assign an empty array, so create an array with a value,
    // but indicate array is sized 0 (empty)
    double x[] = {1.0};
    CHECK(isSorted(0, x));

    // should also indicate a size 1 array is sorted by definition
    CHECK(isSorted(1, x));
  }

  SECTION("test correctly identify an already sorted array")
  {
    // test correctly handling smallest array that might be unsorted
    double x1[] = {1.1, 2.2};
    CHECK(isSorted(2, x1));

    // test correctly handling equal values
    double x2[] = {1.1, 1.1};
    CHECK(isSorted(2, x2));

    double x3[] = {1.1, 2.2, 3.3, 4.4};
    CHECK(isSorted(4, x3));

    double x4[] = {1.1, 1.1, 2.2, 2.2};
    CHECK(isSorted(4, x4));

    // a bigger test
    double x5[] = {-3.8, -1.42, 0.0, 0.0, 1.28, 2.54, 2.55, 3.0, 3.0, 42.0};
    CHECK(isSorted(10, x5));
  }

  SECTION("test correctly identify arrays not sorted")
  {
    // test correctly handling smallest array that might be unsorted
    double x1[] = {2.2, 1.1};
    CHECK_FALSE(isSorted(2, x1));

    double x2[] = {1.1, 3.3, 2.2, 4.4};
    CHECK_FALSE(isSorted(4, x2));

    double x3[] = {1.1, 2.2, 4.4, 3.3};
    CHECK_FALSE(isSorted(4, x3));

    // a bigger test
    // indexes 0 and 1 not sorted
    double x4[] = {-3.8, -3.81, 0.0, 0.0, 1.28, 2.54, 2.55, 3.0, 3.0, 42.0};
    CHECK_FALSE(isSorted(10, x4));

    // indexes 1 and 2 out of order
    double x5[] = {-3.8, -2.4, -2.5, 0.0, 1.28, 2.54, 2.55, 3.0, 3.0, 42.0};
    CHECK_FALSE(isSorted(10, x5));

    // indexes 5 and 6 out of order
    double x6[] = {-3.8, -2.4, 0.0, 0.0, 1.28, 2.54, 2.53, 3.0, 3.0, 42.0};
    CHECK_FALSE(isSorted(10, x6));

    // last indexes 8 and 9 out of order
    double x7[] = {-3.8, -2.4, 0.0, 0.0, 1.28, 2.54, 2.55, 3.0, 42.0, 3.0};
    CHECK_FALSE(isSorted(10, x7));
  }
}
#endif

/** Task 2: areEqual() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the areEqual() function.
 */
#ifdef task2
TEST_CASE("<areEqual()> function tests", "[task2]")
{
  SECTION("test empty and sized 1 arrays are handled correctly")
  {
    // can't actually assign an empty array, so create an array with a value,
    // but indicate array is sized 0 (empty)
    double x[] = {1.0};
    double y[] = {1.0};
    double z[] = {2.0};
    CHECK(areEqual(0, x, y));

    // should correctly handle size 1 arrays
    CHECK(areEqual(1, x, y));
    CHECK_FALSE(areEqual(1, x, z));
  }

  SECTION("test arrays of two values")
  {
    // can't actually assign an empty array, so create an array with a value,
    // but indicate array is sized 0 (empty)
    double x[] = {1.0, 2.0};
    double y1[] = {1.0, 2.0};
    double y2[] = {1.0, 3.0};
    double y3[] = {3.0, 1.0};

    CHECK(areEqual(2, x, y1));
    CHECK_FALSE(areEqual(2, x, y2));
    CHECK_FALSE(areEqual(2, x, y3));
  }

  SECTION("test a bigger array")
  {
    double x[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double y[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    CHECK(areEqual(10, x, y));

    // make index 0 not equal any longer
    y[0] = 0.0;
    CHECK_FALSE(areEqual(10, x, y));

    // in following, fix previous but make a new index no longer equal
    x[0] = y[0];
    y[3] = 0.0;
    CHECK_FALSE(areEqual(10, x, y));

    x[3] = y[3];
    y[8] = 0.0;
    CHECK_FALSE(areEqual(10, x, y));

    x[8] = y[8];
    y[9] = 0.0;
    CHECK_FALSE(areEqual(10, x, y));

    // finally back to everything equal, though lots of 0.0 now
    x[9] = y[9];
    CHECK(areEqual(10, x, y));
  }
}
#endif

/** Task 3: sort() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the sort() function.
 */
#ifdef task3
TEST_CASE("<sort()> function tests", "[task3]")
{
  SECTION("test empty and sized 1 arrays are handled correctly")
  {
    // can't actually assign an empty array, so create an array with a value,
    // but indicate array is sized 0 (empty)
    double x[] = {1.0};
    double xsorted[] = {1.0};
    sort(0, x);
    CHECK(isSorted(0, x));

    // should also indicate a size 1 array is sorted by definition
    sort(1, x);
    CHECK(isSorted(1, x));
    CHECK(areEqual(1, x, xsorted));
  }

  SECTION("test array of size 2 is sorted correctly")
  {
    // array is already sorted, but should still be sorted after
    double x[] = {1.0, 2.0};
    double xsorted[] = {1.0, 2.0};
    sort(2, x);
    CHECK(isSorted(2, x));
    CHECK(areEqual(2, x, xsorted));

    // unsort the array
    x[0] = 2.0;
    x[1] = 1.0;
    sort(2, x);
    CHECK(isSorted(2, x));
    CHECK(areEqual(2, x, xsorted));
  }

  SECTION("test array in reverse order gets sorted")
  {
    // array is already sorted, but should still be sorted after
    double x[] = {5.0, 3.0, -3.0, -5.0};
    double xsorted[] = {-5.0, -3.0, 3.0, 5.0};
    sort(4, x);
    CHECK(isSorted(4, x));
    CHECK(areEqual(4, x, xsorted));
  }

  SECTION("test 1 of bigger unsorted array")
  {
    // array is already sorted, but should still be sorted after
    double x[] = {1.0, -3.0, 42.0, 7.0, -9.0, 36.0, -42.0, 9.0, 7.0, -9.0};
    double xsorted[] = {-42.0, -9.0, -9.0, -3.0, 1.0, 7.0, 7.0, 9.0, 36.0, 42.0};
    sort(10, x);
    CHECK(isSorted(10, x));
    CHECK(areEqual(10, x, xsorted));
  }
}
#endif

/** Task 4: search() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the search() function.
 */
#ifdef task4
TEST_CASE("<search()> function tests", "[task4]")
{
  SECTION("test empty and sized 1 arrays are handled correctly")
  {
    // an empty array should always fail the search
    double x[] = {1.0};
    double xsorted[] = {1.0};
    int result;
    result = search(0, x, 1.0);
    CHECK(isSorted(0, x));
    CHECK(result == NOT_FOUND);

    // should successfully and unsuccessfully search an array of size 1
    result = search(1, x, 1.0);
    CHECK(isSorted(1, x));
    CHECK(areEqual(1, x, xsorted));
    CHECK(result == 0);

    result = search(1, x, 2.0);
    CHECK(result == NOT_FOUND);
  }

  SECTION("test array is already sorted for some successful and unsuccessful searches")
  {
    // array is already sorted, but should still be sorted after
    double xsorted[] = {-42.0, -9.0, -9.0, -3.0, 1.0, 7.0, 7.0, 9.0, 36.0, 42.0};
    int result;

    result = search(10, xsorted, -42.0);
    CHECK(result == 0);

    result = search(10, xsorted, -3.0);
    CHECK(result == 3);

    result = search(10, xsorted, 9.0);
    CHECK(result == 7);

    result = search(10, xsorted, 42.0);
    CHECK(result == 9);

    result = search(10, xsorted, 55.0);
    CHECK(result == NOT_FOUND);

    result = search(10, xsorted, -55.0);
    CHECK(result == NOT_FOUND);

    result = search(10, xsorted, 1.5);
    CHECK(result == NOT_FOUND);
  }

  SECTION("test array that is not sorted gets sorted and search works")
  {
    // array is already sorted, but should still be sorted after
    double x[] = {1.0, -3.0, 42.0, 7.0, -9.0, 36.0, -42.0, 9.0, 7.0, -9.0};
    double xsorted[] = {-42.0, -9.0, -9.0, -3.0, 1.0, 7.0, 7.0, 9.0, 36.0, 42.0};
    int result;

    result = search(10, x, -42.0);
    CHECK(isSorted(10, x));
    CHECK(areEqual(10, x, xsorted));
    CHECK(result == 0);

    result = search(10, x, -3.0);
    CHECK(result == 3);

    result = search(10, x, 9.0);
    CHECK(result == 7);

    result = search(10, x, 42.0);
    CHECK(result == 9);

    result = search(10, x, 55.0);
    CHECK(result == NOT_FOUND);

    result = search(10, x, -55.0);
    CHECK(result == NOT_FOUND);

    result = search(10, x, 1.5);
    CHECK(result == NOT_FOUND);
  }
}
#endif
