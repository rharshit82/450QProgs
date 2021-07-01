int countBitsFlip(int a, int b){
        int Xor = a^b;
        int count=0;
        while(Xor>0){
            count++;
            Xor=(Xor&(Xor-1));
        }
        return count;
    }
};