#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s="ab";
 //  int t=1;
 //  string ans;
 //  do{
 //    if(t==2)
 //    {
 //          ans=s;
 //          break;
 //    }
 // t++;
 //  }while(next_permutation(s.begin(),s.end()));
 if(next_permutation(s.begin(),s.end()))
 cout<<s<<endl;
 else
 cout<<"no answer"<<endl;
  // int n=3;
  // int cnt= __builtin_popcount(n);
  // cout<<cnt<<endl;
  return 0;
}
// for (int i = 2; i <=n/2 ; i++) {
//             if(n%i==0) {
//                 System.out.println("Number " + n +" is not a prime no");
//                 isPrime = false;
//                 break;
//             }
//         }
//         if(isPrime)
//             System.out.println("Number " + n +" is a prime no");
