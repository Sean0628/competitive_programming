#include <iostream>
#include <vector>

int calculate_area(int a, int b) {
  return a * b;
}

int calculate_perimeter(int a, int b) {
  return (a * 2) + (b * 2);
}

int main() {
  int n = 2;
  int area = 0;
  int perimeter = 0;
  std::vector<int> numbers(n);

  for (int i = 0; i < n; ++i) {
    std::cin >> numbers[i];
  }

  area = calculate_area(numbers[0], numbers[1]);
  perimeter = calculate_perimeter(numbers[0], numbers[1]);

  std::cout << area << " " << perimeter << std::endl;

  return 0;
}
