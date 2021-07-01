vector<int> find(int arr[], int n , int x )
{
    vector<int>result;
    int check=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x && check==0){
            check=1;
            result.push_back(i);
        }
        if(check==1 && arr[i]==x && arr[i+1]!=x){
            result.push_back(i);
        }
        
    }
    if(check==0){
        result.push_back(-1);
        result.push_back(-1);
    }
    
    return result;
}