int isPlaindrome(char S[])
{
    int n= strlen(S);
    for(int i=0,j=n-1;i<n/2;i++,j--){
        if(S[i]!=S[j]) return 0;
    }
    return 1;
}