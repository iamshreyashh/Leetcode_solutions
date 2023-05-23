class Solution
{
public:
    int knapsack(vector<int> &wt, int w, int n)
    {
        int dp[n+1][w+1];
        for (int i=0; i<=n; i++)
        {
            for (int j=0; j<=w; j++)
            {
                if(i==0 || j==0) dp[i][j]=0;
                else if (wt[i - 1] <= j)
                {
                    int val1=wt[i-1]+dp[i-1][j-wt[i-1]];
                    int val2=dp[i-1][j];
                    dp[i][j]=max(val1,val2);
                }
                else if(wt[i-1]>j) dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][w];
    }
    int lastStoneWeightII(vector<int> &stones)
    {
        int sum = 0, n=stones.size();
        for (auto stone : stones) sum += stone;
        return sum-2*knapsack(stones,sum/2,n);
    }
};