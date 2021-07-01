void sort012(int a[], int n)
    {
        int zcount=0,ocount=0,tcount=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zcount++;
            }
            if(a[i]==1){
                ocount++;
            }
            if(a[i]==2){
                tcount++;
            }
        }
        int k=0;
        for(int i=0;i<zcount;i++){
            a[k++]=0;
        }
        for(int i=0;i<ocount;i++){
            a[k++]=1;
        }
        for(int i=0;i<tcount;i++){
            a[k++]=2;
        }
        
    }