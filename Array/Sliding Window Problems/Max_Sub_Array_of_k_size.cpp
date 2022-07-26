#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mx=INT_MIN;
    int n;
    cin>>n;
    int a[n],k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"\nEnter the window size:";
    cin>>k;
    int i=0,j=0;
    int sum=0;
    while(j<n)
    {
      sum=sum+a[j];
      if(j-i+1<k)                            // Placing the end pointer for exact window size
        j++;
      else if(j-i+1==k)
      {
          mx=max(mx,sum);                    // Comparing the values to find the maximum sum
          sum-=a[i];                         // to delete the vale of first element and use sum value of remaining element
          i++;
          j++;
      }

    }
    cout<<"Largest sum of sub array:"<<mx;
    return 0;
}
