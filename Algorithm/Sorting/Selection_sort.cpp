#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n-1;i++)
    {
        int mi=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[mi])
                mi=j;
        }
        if(mi!=i)
        {
         int t=v[i];
         v[i]=v[mi];
         v[mi]=t;
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
