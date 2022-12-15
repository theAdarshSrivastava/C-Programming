#include<bits/stdc++.h>
#include<vector>
using namespace std;
void reverse1(int n, int k, vector<int>& v)
{
    if(k>=n/2)
        cout<<"Palindrome";
    else
    {
      if(v[k]==v[n-k-1])
        reverse1(n,k+1,v);
      else
        cout<<"Not a Palindrome";
    }
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
    reverse1(n,0,v);
}
