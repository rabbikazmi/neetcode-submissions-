class Solution {
public:
    int change(int amount, vector<int>& coins) {

        vector<unsigned int> dp(amount+1, 0);
        dp[0] = 1;

        for(int c=0; c<coins.size(); c++){
            for(int i=coins[c]; i<=amount; i++){
                dp[i] += dp[i-coins[c]];
            }
        }
        return dp[amount];
    }
};
