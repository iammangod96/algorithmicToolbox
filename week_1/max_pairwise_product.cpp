#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>& numbers) {
  long long result = 0;
  int n = numbers.size();
  int max1=-1, max2=-1;
  int m1i=-1;
  for(int i=0;i<n;i++)
  {
  	if(numbers[i] > max1)
  	{
  		max1 = numbers[i];
  		m1i = i;
  	}
  }
  for(int i=0;i<n;i++)
  {
  	if(numbers[i] > max2 && i != m1i)
  	{
  		max2 = numbers[i];
  	}
  }
  result = (long long)max1 * max2;
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}
