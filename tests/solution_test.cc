#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
using namespace std;

TEST(MedianTest, HandlesEvenSizeInput) {
  Solution solution;
  double arr[] = {1,26,13,8,10,20};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<double> v(arr,arr+n);
  double actual = solution.FindMedian(v);
  double expected = 11.5;
  EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(MedianTest, HandlesOddSizeInput) {
  Solution solution;
  double arr[] = {1,24,16,10,20};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<double> v(arr,arr+n);
  double actual = solution.FindMedian(v);
  double expected = 16;
  EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(MedianTest, HandlesEqualInputs) {
  Solution solution;
  double arr[] = {4,4,4,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<double> v(arr,arr+n);
  double actual = solution.FindMedian(v);
  double expected = 4;
  EXPECT_DOUBLE_EQ(expected, actual);
}

TEST(MedianTest, HandlesEmptyInput) {
  Solution solution;
  double arr[] = {};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<double> v(arr,arr+n);
  double actual = solution.FindMedian(v);
  double expected = -1;
  EXPECT_DOUBLE_EQ(expected, actual);
}

