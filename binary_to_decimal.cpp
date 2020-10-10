#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
#define ll long long int
using namespace std;
/*int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}
*/
ll binaryTodecimal(ll num)
{
  cout<<num<<endl;
  ll base=0;
  ll dml=0;
  while(num>0)
  {
    ll a=num%10;
    dml=dml+(a*pow(2,base));
    base=base+1;
    num=num/10;
  }
  return dml;
}
int main()
{
  ll n;
  cin>>n;
  string binary=bitset<16>(n).to_string();
  cout<<binary<<endl;
  cout<<binaryTodecimal(stoi(binary));
  return 0;
}
