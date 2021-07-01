int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
        int minsofar=arr[0];
        int maxsofar=arr[n-1];
        
        for(int i=1;i<=n-1;i++){
            if(arr[i]-k >=0){
            minsofar=min(arr[0]+k,arr[i]-k);
            maxsofar=max(arr[n-1]-k,arr[i-1]+k);
            diff=min(diff,maxsofar-minsofar);
            }
            
        }
        return diff;
    }