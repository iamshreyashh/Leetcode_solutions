class Solution {
public:
    int dp[1001]; // Memoization table
    
    int cos(int i, vector<int>& cost, int sum) {
        if (i >= cost.size())
            return 0;
        
        if (dp[i] != -1)
            return dp[i];
        
        int takeOneStep = cost[i] + cos(i + 1, cost, sum);
        int takeTwoSteps = cost[i] + cos(i + 2, cost, sum);
        
        dp[i] = min(takeOneStep, takeTwoSteps);
        
        return dp[i];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        
        int n = cost.size();
        return min(cos(0, cost, 0), cos(1, cost, 0));
    }
};
