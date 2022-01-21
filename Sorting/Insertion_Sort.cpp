#include <bits/stdc++.h>
using namespace std;
void Insertion_Sort(vector<int> &vec,int n)
{

    for (auto it = vec.begin(); it != vec.end(); it++)
    {        
        auto const insertion_point = upper_bound(vec.begin(), it, *it); // find the first greater element then *it
        rotate(insertion_point, it, it+1);      // rotate the vector / shifting the unsorted part  
    }

}
void print(vector<int> v)
{
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}
int main()
{
	int n,x;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	Insertion_Sort(v,n);
	print(v);
	return 0;
}
