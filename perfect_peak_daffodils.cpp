#include<bits/stdc++.h>
using namespace std;
int find(int a[],int n)
{
  if(n<3)
  return 0;
  int i=1,l=a[0];
  while(i<n-1)
  {
    if(a[i]>l)
    {
      l=a[i];
      int j=i+1;
      while(j<n)
      {
        if(a[j]<l)
        {
          i=j;
          break;
        }
        j++;
      }
      if(j==n)
      return 1;
    }
    i++;
  }
  return 0;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  cout<<find(a,n);
  return 0;
}
