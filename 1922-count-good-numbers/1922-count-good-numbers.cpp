
        class Solution {
public:
    long long power(long long base ,long long exp,long long MOD){
        long long result =1;
        while(exp>0){
            if(exp%2==1) result = (result*base) % MOD;
            base =(base*base)%MOD;
            exp /=2;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
        long long MOD =1e9 + 7;
        long long evencount = (n+1)/2;
        long long oddcount = (n)/2;

       long long part1= power(5,evencount,MOD);
       long long part2= power(4,oddcount,MOD);
       return (part1*part2)%MOD;

    }
};