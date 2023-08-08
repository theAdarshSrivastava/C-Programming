class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> m;
        int q=0;
        vector<vector<int>> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int maxi=0;
        for(auto x:m){
            if(x.second>maxi){
                maxi=x.second;
            }
        }
        for(int i=0;i<maxi;i++){
        vector<int> a;
        for(auto &x:m){
            if(x.second>0){
               q=1;
               a.push_back(x.first);
               x.second--;
            }
        }
        if(q==0){
            return v;
        }
        else{
            v.push_back(a);
        }
        }
        return v;
    }
};