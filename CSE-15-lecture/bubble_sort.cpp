#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n;
void bubble_sort()
{
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
        if(v.at(i)>v.at(j))
        swap(v.at(i),v.at(j));
      }
  }
}

int main()
{
    int val;
    cout<<"Range : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }

    cout<<"before sorting the element are: ";
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;

    bubble_sort();

    cout<<"After sorting the element are: ";
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;


}
