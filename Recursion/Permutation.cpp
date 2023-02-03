#include<bits/stdc++.h>
using namespace std;

void func(int ind, int n, vector<int> &vec)
{
    if(ind==n)
    {
        for(auto it:vec)
            cout<<it<<" ";
        cout<<"\n";
    }

    for(int i=ind;i<n;i++)
    {
        swap(vec[ind],vec[i]);
        func(ind+1,n,vec);
    }
}

int main()
{
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    vector<int> vec;
    func(0,n,v);

}
