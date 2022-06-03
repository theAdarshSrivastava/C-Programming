#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int lo=0,hi=n-1;
    int se,mid;
    cin>>se;
    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(v[mid]<se)
            lo=mid+1;
        else
            hi=mid;
    }
    if(v[lo]==se)
        cout<<"Position:"<<lo+1<<endl;
    else if(v[hi]==se)
        cout<<"Position:"<<hi+1<<endl;
    else
        cout<<"Not Found";
    return 0;
}
