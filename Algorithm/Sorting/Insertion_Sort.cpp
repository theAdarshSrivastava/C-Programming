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

    for(int i=1;i<n-1;i++)
    {
        int temp=v[i];
        int j=i-1;
        while(j>=0 && v[j]>temp)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=temp;
    }
    cout<<"Insertion Sort Applied!!!\n";
    cout<<"Final Array:";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
