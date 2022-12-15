#include<bits/stdc++.h>
#include<vector>
using namespace std;
void subseq(int i,vector<int> &v,int a[],int n)
{
    if(i==n)
    {
        for(auto it : v)
            cout<<it<<" ";
        if(v.size()==0)
        cout<<"{}";
        cout<<endl;
        return;
    }
    // Take or pick the index value
    v.push_back(a[i]);
    subseq(i+1,v,a,n);

    //Not take or remove the index value
    v.pop_back();
    subseq(i+1,v,a,n);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int> ds;
    subseq(0,ds,a,n);

}
