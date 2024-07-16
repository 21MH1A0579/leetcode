class Solution {
public:
    bool isprime(int n){
        if( n==1 )return 0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    int countPrimeSetBits(int left, int right) {
        int cps=0;
        for(int i=left;i<=right;i++){
            int c=0;
            int temp=i;
            while(temp>0){
                if((temp&1)>0){
                    c++;
                }
                temp>>=1;
            }
            if(isprime(c)){
                cps++;
            }

        }
        return cps;
    }
};