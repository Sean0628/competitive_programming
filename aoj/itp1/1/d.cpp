#include <iostream>

int main() {
  int seconds, minutes, hours;
  std::cin >> seconds;

  minutes = seconds / 60;
  hours = minutes / 60;

  std::cout << hours << ":" << (minutes % 60) << ":" << (seconds % 60) << std::endl;

  return 0;
}
