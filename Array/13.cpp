int maxSubarraySum(int arr[], int n){
         int currsum=0;
        int maxsum=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum>maxsum) maxsum=currsum;
            if(currsum <0) currsum=0;
            
        }
        return maxsum;