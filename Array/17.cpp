int maxProfit(vector<int>& prices) {
        int minsofar=9999;
        int maxdiffsofar=-1;
        int mincheck=0;
        for(int i=0;i<prices.size();i++){
            minsofar=min(minsofar,prices[i]);
            maxdiffsofar=max(maxdiffsofar,prices[i]-minsofar);
        }
        return maxdiffsofar;
    }