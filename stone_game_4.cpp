bool winnerSquareGame(int n) {
        int dp[n+1];
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            int res = sqrt(i);
            if(res * res == i)
            {
                dp[i] = 1;
                continue;
            }
            int j = 1;
            bool flag = false;
            while(j*j <= i)
            {
                if(dp[i-j*j] == 0)
                {
                    flag = true;
                    break;
                }
                j++;
            }
            if(flag == true)
                dp[i] = 1;
            else
                dp[i] = 0;
        }
        return dp[n];
    }
