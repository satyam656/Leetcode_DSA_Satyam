bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int firstSmallest = INT_MAX;
        int secondSmallest = INT_MAX;
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > secondSmallest)
                return true;
            
            if(firstSmallest < nums[i] && nums[i] < secondSmallest)
                secondSmallest = nums[i];
            
            firstSmallest = min(firstSmallest, nums[i]);
            
        }
        return false;
    }
