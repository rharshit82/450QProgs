vector<int> singleNumber(vector<int> nums) 
    {
        int Xor=0,x1=0,x2=0;
        for(int i=0;i<nums.size();i++){
            Xor=Xor^nums[i];
        }
        int temp= Xor&(~(Xor-1));
        
        for(int i=0;i<nums.size();i++){
            if((nums[i]&temp)!=0){
                x1=x1^nums[i];
            } else{
                x2=x2^nums[i];
            }
        }

        vector<int> result;
        result.push_back(x1);
        result.push_back(x2);
        sort(result.begin(),result.end());
        return result;
        
    }