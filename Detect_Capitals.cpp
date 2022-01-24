bool detectCapitalUse(string word) {
        int n = word.length();
        bool flag1 = true, flag2 = true;
        
        for(int i = 1; i < n; i++)
        {
            if(islower(word[0]) && isupper(word[i]))
                return false;
            if(islower(word[i]))
                flag1 = false;
            if(isupper(word[i]))
                flag2 = false;
        }
        if(flag1 == true || flag2 == true)
            return true;
        return false;
    }
