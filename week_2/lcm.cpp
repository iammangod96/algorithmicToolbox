#include <iostream>
typedef unsigned long long int ULL;

ULL gcd(ULL a, ULL b)
{
	if(b == 0 ) return a;
	else return gcd(b,a%b);
}

ULL lcm_naive(ULL a, ULL b) {
  
  return (a*b)/gcd(a,b);
}

int main() {
  ULL a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
