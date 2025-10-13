#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define loop(i,a,b) for(int i=a;i<b;i++)

int main()
{
  ll k, n, w;
  cin >> k >> n >> w;
  ll cost = (k * w* (w + 1))/2;
  if(cost - n > 0)
    cout << cost - n;
  else
    cout << 0; 
  return 0;
}