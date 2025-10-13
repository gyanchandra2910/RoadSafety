#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i,a,b) for(int i = a; i < b; i++)

int32_t main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  loop(i,0,n) cin >> a[i];

  int ans = 0, cnt = 1;
  loop(i,1,n)
  {
    if(a[i] > a[i - 1])
    {
      cnt++;
    }
    else
    {
      ans = max(ans,cnt);
      cnt = 1;
    }
  }
  ans = max(ans,cnt);
  cout << ans << endl;
  
  return 0;
}