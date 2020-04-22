#include<bits/stdc++.h>
#define MAX 500
using namespace std;

void mergeSort(int arr[],int low,int mid,int high);
void part(int arr[],int low,int high);

int main()
{
    while(1)
    {

    int merged[MAX],i,n;

    printf("\nEnter the total number of elements: ");
    cin>>n;

    printf("Enter the elements which to be sorted: ");
    for(i=0;i<n;i++)
    {
   cin>>merged[i];

    }

    part(merged,0,n-1);

    printf("After merge sorting elements are: ");
    for(i=0;i<n;i++){
         printf("%d ",merged[i]);
    }

    }
   return 0;
}

void part(int arr[],int low,int high)
{

    int mid;

    if(low<high){
         mid=(low+high)/2;
         part(arr,low,mid);
         part(arr,mid+1,high);

         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high)
 {
    int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m])
            {
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++)
         {
             temp[i]=arr[k];
             i++;
         }
    }
    else
        {
         for(k=l;k<=mid;k++)
         {
             temp[i]=arr[k];
             i++;
         }
    }

    for(k=low;k<=high;k++)
     {
         arr[k]=temp[k];
    }
}


