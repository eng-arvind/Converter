#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i=0,a;
  int sum=0;
  a=(i*i*i);
  while(i<100)
  {
    sum+=a;
    i++;
    a=(i*i*i);
  }
  cout<<sum<<endl;
  return 0;
}
