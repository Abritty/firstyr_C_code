#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int main()
{
    int val,n,pointer;
    cin>>n;
    cout<<"Data :";
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
     cout<<"The Data You entered : " <<endl;
     cout<<"Data........Position "<<endl;
      for(int i=0;i<n;i++)
      cout<<v[i]<<"...."<<i<<endl;


    cout<<"Data to be searched ??";
    cin>>val;

    for(int i=0;i<=n;i++)
    {
        if(v[i]==val)
        {
            pointer=i;
            break;
        }
    }

    cout<<"position of Searched Data :"<<pointer<<endl;

}
