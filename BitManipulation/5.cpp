bool isPowerofTwo(long long n){
        
        int count=0;
        while(n>0){
            count++;
            n=n&(n-1);
            if(count>1) return false;
        }
        if(count==1) return true;
        else return false;
        
    }