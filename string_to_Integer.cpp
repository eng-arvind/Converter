#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#define ll long long int
using namespace std;

int main()
{
   string s="123455";
   //using stringstream
   stringstream srm(s);
   ll num=0;
   srm>>num;
   cout<<"In Integer="<<num<<endl;
   //Using stoi or atoi
   string s1="45486";
   int num1=stoi(s1);
   cout<<"In Integer="<<num1<<endl;

   return 0;
}
