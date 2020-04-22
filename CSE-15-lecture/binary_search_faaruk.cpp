#include<bits/stdc++.h>
using namespace std;
int binary_Search(int *arr, int low, int high, int x)
{
  while (low <= high)
  {
    int mid = (high+low)/2;


    if (arr[mid] == x)
    return mid;

    if (arr[mid] < x)
    low = mid + 1;

    else
    high = mid - 1;
  }

  return -1;
}

int main(void)
{
   int arr[100],n,x;

   cout<<"Range: "<<endl;
   cin>>n;

    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
     cout<<"\nThe Data Stored now as:";
     for(int i=0;i<n;i++)
     cout<<arr[i]<<"(" <<i <<")"<<endl;
    cout<<"Searched element ?? ::";
    cin>>x;

    int result = binary_Search(arr, 0, n-1, x);
    if(result == -1)
    printf("Element is not present in array\n")
    else
      printf("Element is present at index %d", result);

   cout<<endl<<endl;
   return 0;

}
