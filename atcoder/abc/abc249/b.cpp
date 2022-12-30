#include <iostream>
#include <set>

bool check_uniqueness(std::string s) {
  std::set<char> char_set(s.begin(), s.end());

  for (char i:char_set)
    if (count(s.begin(), s.end(), i) > 1)
      return false;

  return true;
};

int main() {
  std::string str;

  std::cin >> str;

  if (std::any_of(str.begin(), str.end(), islower) &&
      std::any_of(str.begin(), str.end(), isupper) &&
      check_uniqueness(str)) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  };

  return 0;
}
