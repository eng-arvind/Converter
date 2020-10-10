#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str = "geeksforgeeks";
	string str1 = "org";
  // find function
	size_t  found = str.find(str1);
	if(found==string::npos)
	cout<<"No";
	else
	cout<<"yes :pos:"<<found<<endl;
  // sub string method
	string sb=str.substr(5,2);
	cout<<sb<<endl;
	// replace
	str.replace(5,2,"to");
	cout<<str<<endl;
		// resize
str.resize(5);
cout<<str<<endl;
// insert
str.insert(5,"for");
cout<<str<<endl;
// pop
	str.pop_back();
	cout<<str<<endl;
	//push
	str.push_back('r');
	cout<<str<<endl;

	return 0;
}
