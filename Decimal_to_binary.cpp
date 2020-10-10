#include<iostream>
#include<bitset>
#include<string>
#include<sstream>
#define ll long long int
using namespace std;

int main()
{
  ll n;
  cin>>n;
  string binary=bitset<16>(n).to_string();
   cout<<"In string="<<binary<<endl;
  ll num =stoi(binary);
   cout<<"In Integer="<<num<<endl;
  return 0;
}
