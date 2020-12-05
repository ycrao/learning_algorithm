#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, amount+1);
        dp[0] = 0;
        // https://www.cnblogs.com/xylc/p/3653036.html
        for (int i = 0; i < dp.size(); i ++) {
            for (int j = 0; j < coins.size(); j ++) {
                if (i - coins[j] < 0) {
                    continue;
                } else {
                    dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
                }
            }
        }
        return (dp[amount] == amount + 1) ? -1 : dp[amount];
    }
};

int main() {
    Solution s;
    vector<int> coins = {1, 5, 10, 20, 50, 100};
    int amount = 163;  // 100 + 50 + 10 + 1 + 1 + 1
    int res = s.coinChange(coins, amount);
    cout << res << endl;
}