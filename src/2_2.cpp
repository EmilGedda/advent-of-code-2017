#include <advent-of-code.hpp>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

int find_divisor_results(const std::vector<int> &row) {
  for (size_t i = 0; i < row.size(); i++) {
    for (size_t j = i + 1; j < row.size(); j++) {
      const int max = std::max(row[i], row[j]);
      const int min = std::min(row[i], row[j]);
      if (max % min == 0)
        return max / min;
    }
  }
  return std::numeric_limits<int>::lowest();
}

int test() {
  int sum = 0;
  std::string line;
  while (std::getline(std::cin, line)) {
    std::istringstream ss(line);
    int curr;
    std::vector<int> row;
    while (ss >> curr)
      row.push_back(curr);
    sum += find_divisor_results(row);
  }
  return sum;
}
