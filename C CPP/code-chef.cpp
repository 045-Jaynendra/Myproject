#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  while (a != b)
  {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}
int lcm(int n1, int n2, int g)
{
  return (n1 / g) * n2;
}
int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    int n, count = 0;
    cin >> n;
    for (int i = 1; (i * i) <= n; i++)
    {
      for (int j = i; (j * j) <= n; j++)
      {
        int g = gcd(i, j);
        int l = lcm(i, j, g);
        int tmp = (i * i) + (j * j) + (g * g) + (l * l);
        if ((i == j) && (tmp == n))
          count++;
        else if (tmp == n)
          count += 2;
      }
    }
    cout << count << endl;
  }
  return 0;
}