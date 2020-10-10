#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll pos(ll sm)
{
  long double a = sqrtl(1ul+4*(sm));
  a=a-1.0;
  a=a/2.0;
  ll fs = a;
  return fs;
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    if(n==0 || n==1 || n==2)
    {
      cout<<0<<endl;
      continue;
    }
    ll tl = (n*(n+1))/2;
    if(tl%2!=0)
    {
      cout<<0<<endl;
      continue;
    }
    ll indx = pos(tl);
    ll ss = indx*(indx+1)/2;
    if(tl/2==ss)
    {
      ll ans=(indx*(indx-1ul))/2l +((n-indx)*(n-indx-1ul))/2l+(n-indx);
      cout<<ans<<endl;
    }
    else
    cout<<n-indx<<endl;
  }
  return 0;
}
