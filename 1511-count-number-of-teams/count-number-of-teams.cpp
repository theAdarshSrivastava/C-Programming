class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int total_teams = 0;

        for(int idx=0; idx<n; idx++) {

            int left_smaller=0, left_larger=0, right_smaller=0, right_larger=0;

            for(int l=idx-1; l>=0; l--)  {
                if(rating[l]<rating[idx])   {
                    left_smaller++;
                }
                else {
                    left_larger++;
                }
            }

            for(int r=idx+1; r<n; r++)  {
                if(rating[r]<rating[idx])   {
                    right_smaller++;
                }
                else {
                    right_larger++;
                }
            }


            int curr_idx_teams = (left_smaller*right_larger) + (left_larger*right_smaller);

            total_teams += curr_idx_teams;
        }

        return total_teams;
    }
};