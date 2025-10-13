#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll a, b;
  cin >> a >> b;
  ll cnt = 0;
  while (a <= b)
  {
    a = a*3;
    b = b*2;
    cnt++;
  }
  cout << cnt << endl;
  
  return 0;
}