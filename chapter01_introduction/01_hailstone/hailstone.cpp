// Copyright [2017] <Zhao Yichen>
// Hailstone sequences:
// Hailstone(n) = {1}  (n<=1)
//              = {n} U Hailstone(n/2) (n is even)
//              = {n} U Hailstone(3n+1) (n is odd)
// Hailstone(42) = {42, 21, 64, 32, ..., 1}

#include<cstdio>

#include<iostream>

// The count of a Hailstone sequece.
int hailstone(int n) {
  int length = 1;
  while (1 < n) {
    if (n % 2) {
      n = 3 * n + 1;
    } else {
      n /= 2;
    }
    ++length;
  }
  return length;
}

int main() {
  printf("Please input a number(input %d to exit): ", 0);
  int number = 0;
  while (true) {
    std::cin >> number;
    if (number < 0) {
      printf("Input illegal, please try again.");
      continue;
    } else if (number == 0) {
      break;
    } else {
      printf("The count of Hailstone(%d) is %d.\n", number, hailstone(number));
    }
    printf("Please input a number(input %d to exit): ", 0);
  }
  return 0;
}
