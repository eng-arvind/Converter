#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<int> st;
  st.insert(1);
  st.insert(2);
  st.insert(3);
  st.insert(4);
  if(st.find(6)==st.end() || st.find(5)==st.end())
  cout<<"insert";
  else
  cout<<"not insert";
return 0;
}
