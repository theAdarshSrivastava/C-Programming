class Solution {
public:
    int n;
    unordered_set<string> st;
    int dp[301];
    bool solve(int idx,string s)
    {
        if(idx==n)
        return true;

        if(dp[idx]!=-1) return dp[idx];

        if(st.find(s)!=st.end()) return dp[idx] = true;

        for(int i=1;i<=n;i++)
        {
            string temp;
            temp = s.substr(idx,i);

            if(st.find(temp)!=st.end() && solve(idx+i,s))
            {
                return dp[idx]=true;
            }
        }
        return dp[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.size();
        memset(dp,-1,sizeof(dp));
        for(auto it:wordDict)
        {
            st.insert(it);
        }
        return solve(0,s);
    }
};