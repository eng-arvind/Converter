// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;++i)
        {
          int a;
          cin>>a;
          v.push_back(a);
        }

        int subsetnum =(1<<n);
        vector<vector<int> > allsbt;
        for(int i=0;i<subsetnum;i++)
        {
            vector<int> subset;
            for(int j=0;j<n;++j)
            {
                if((i&(1<<j))!=0)
                subset.push_back(v[i]);
            }
            allsbt.push_back(subset);
        }
        vector<int> ans;
        int maxxor=0;
        for(vector<int> subset:allsbt)
        {
            int xr=0;
          //  int ad=0;
            for(int ele:subset)
            {
                xr^=ele;
              //  ad=ad & ele;
            }
            //int mx=max(xr,ad);
            if(xr>maxxor)
            {
                maxxor=xr;
                ans=subset;
            }
        }
        cout<<maxxor<<" "<<ans.size()<<endl;
    }
    return 0;

}
