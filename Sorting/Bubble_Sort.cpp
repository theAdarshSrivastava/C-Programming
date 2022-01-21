#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int i, j,temp;
   vector<int> vec;
   int n;
   cin>>n;
   for(i = 0; i<n; i++) {
    int x;
    cin>>x;
    vec.push_back(x);
   }
for(i = 0; i<n; i++) {
   for(j = i+1; j<n; j++)
   {
      if(vec[j] < vec[i]) {
         temp = vec[i];
         vec[i] = vec[j];
         vec[j] = temp;
      }
   }
}
for(auto i:vec) {
   cout <<i<<" ";
}
return 0;
}
