#include <advent-of-code.hpp>
#include <string>
#include <iostream>

int test() {
  int ctr = 0;
  std::string input;
  std::cin >> input;
  for (size_t i = 0; i < input.size(); i++) {
    if (input[i] == input[(i + 1) % input.size()])
      ctr += input[i] - '0';
  }
  return ctr;
}
