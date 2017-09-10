#include <iostream>
typedef unsigned long long int ULL;

ULL gcd_naive(ULL a, ULL b) {
  if(b == 0) return a;
  else return gcd_naive(b, a%b);
  
}

int main() {
  ULL a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
