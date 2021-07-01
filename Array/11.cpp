int findDuplicate(vector<int>& nums) {
        long long arr[100001]={0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        for(long long i=0;i<100001;i++){
            if(arr[i]>1) return i;
        }
        return 0;
    }