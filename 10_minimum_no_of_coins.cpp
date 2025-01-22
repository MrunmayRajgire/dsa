#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int n = coins.size() - 1;
        int cnt = 0;
        for(int i= n;i>=0;i--)
        {
            while(amount>=coins[i])
            {
                cnt++;
                amount = amount - coins[i];
            }
        }
        if(amount!=0){
            return -1;
        }
        return cnt;
    }
};

/*
This approach is greedy and only works for particular cases. If amount=6 and coins = 1,3,4
then the answer will be 3(4,1,1) but the answer should be 2(3,3). So, this approach is not correct.
*/