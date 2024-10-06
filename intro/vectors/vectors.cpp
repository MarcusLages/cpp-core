#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num) {
  std::vector<int> v {num, num * 2, num * 3};
  return v;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}