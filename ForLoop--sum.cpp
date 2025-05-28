#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
    cout << sum << endl; // inside loop how sum are perform step by step
  }
  cout << sum << endl; // sum of the loop
  return 0;
}