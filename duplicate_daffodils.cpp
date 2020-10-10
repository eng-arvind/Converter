#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void remove(string st)
{
  unordered_set<string> h;
  stringstream s(st);
  do {
        string w;
        s>>w;
        // while(h.find(w)==h.end())
        // {
        //   cout<<w<<" ";
        //   h.insert(w);
        // }
        cout<<w<<" ";
        } while(s);
}
int main()
{
  string st;
  getline(cin,st);
  remove(st);
}
