class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(n==0 || k==0 ) return 1.0;
        vector<double> dp(k+maxPts+1,0);
        double sum = 0;
        //Dealing with base case when points greater than k
        for(int i=0;i<maxPts;i++){
            dp[k+i] = (k+i)<=n;
            //Calculating the initial window
            sum+=dp[k+i];
        }
        //Initial window value
        dp[k-1] = sum/maxPts;

        //Calculating other probabilities using the relation
        for(int i=k-2;i>=0;i--){
            dp[i] = dp[i+1] + ((dp[i+1] - dp[i+maxPts+1])/maxPts);
        }
        return dp[0];
    }
};