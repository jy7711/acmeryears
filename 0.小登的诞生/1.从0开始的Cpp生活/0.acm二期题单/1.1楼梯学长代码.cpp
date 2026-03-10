#include <iostream>
typedef long long ll;
using namespace std;
ll a[45];
int main()
{
  ll n;
  cin >> n;
  a[1] = 1;
  a[2] = 2;
  for (int i = 3; i <= n; i++)
  {
    a[i] = a[i - 1] + a[i - 2];
  }
  cout << a[n];
  return 0;
}
