vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        
        for(int k = 2; k <= 9; k++)
        {
            int res = 0;
            int start = 1;
            
            while(1)
            {
                int p = start;
                for(int j = 0; j < k; j++)
                {
                    res = res * 10 + p;
                    p++;
                }
                if(res >= low && res <= high)
                    ans.push_back(res);
                res = 0;
                if(p > 9)
                    break;
                start++;
            }
        }
        return ans;
    }
