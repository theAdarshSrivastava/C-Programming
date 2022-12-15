#include<bits/stdc++.h>
#include<vector>
using namespace std;
void pal(int i,vector<int> &v, int n)
{
    if(i>=n/2)
    {
        cout<<"Palindrome";
        return;
    }
    if(v[i]!=v[n-i-1])
    {
        cout<<"Not a Palindrome";
        return;
    }
    else
        pal(i+1,v,n);
}
int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    pal(0,v,n);

}
