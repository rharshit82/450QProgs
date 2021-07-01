int findPosition(int N) {
        if(N==0 or (N&N-1)!=0) return -1;
        else return log2(N)+1;
    }