bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) 
            return false;
        
        int idx = -1;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] == arr[i-1]) 
                return false;
            
            if(arr[i] < arr[i-1])
            {
                idx = i;
                break;
            }
        }
        if(idx == 1 || idx == -1) 
            return false;
        
        for(int i = idx; i < n; i++)
        {
            if(arr[i] >= arr[i-1])
                return false;
        }
        return true;
    }
