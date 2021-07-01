void reverseString(vector<char>& s) {
        for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--){
            char c = s[j];
            s[j]=s[i];
            s[i]=c;
        }
    }