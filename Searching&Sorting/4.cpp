int countSquares(int N) {
        vector<int>squares;
        int square=0;
        int i=1;
        while(square<N){
            square=i*i;
            if(square<N) squares.push_back(square);
        }
        return squares.size();
    }