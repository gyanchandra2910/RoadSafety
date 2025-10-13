#include<bits/stdc++.h>
using namespace std;
#define int long long
#define lp(i,a,b) for(int i = a; i < b; i++)

int32_t main()
{
  string inp;
  cin >> inp;
  vector<string> a(5);
  lp(i,0,5) cin >> a[i];

  lp(i,0,5)
  {
    if(inp[0] == a[i][0])
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  lp(i,0,5)
  {
    if(inp[1] == a[i][1])
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}