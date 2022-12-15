#include<bits/stdc++.h>
using namespace std;
void subk(int i,vector<int> &ds, int a[], int n, int k)
{
    if(i==n)
    {
        if(accumulate(ds.begin(),ds.end(),0)==k)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            if(ds.size()==0)
                cout<<"[]";
            cout<<endl;
        }
        return;
    }
    //Take or pick the index value into subsequence
    ds.push_back(a[i]);
    subk(i+1,ds,a,n,k);

    //Not take or drop the index value into subsequence
    ds.pop_back();
    subk(i+1,ds,a,n,k);
}
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the Sum Value:";
    cin>>k;
    vector<int> v;
    subk(0,v,a,n,k);
    return 0;
}
