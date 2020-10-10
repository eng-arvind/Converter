#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v(5);
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // v.push_back(4);
  // v.push_back(5);
  // int init=0;
  // //cout<<v[1]<<endl;
  // cout<<accumulate(v.begin(),v.end(),init);
  v.push_back(3);
  v.push_back(4);
  if(v.empty())
  cout<<v.back();
  return 0;
}
