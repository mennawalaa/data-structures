#include <iostream>

int get_change(int m) {
  int no_10;
  int no_5;
  int no_1;
  int remainder;
 no_10= m/10;
 remainder=m%10;
 no_5=remainder/5;
 remainder=remainder%5;
 no_1=remainder;

  return (no_10+no_5+no_1);
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}