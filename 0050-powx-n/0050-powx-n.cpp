class Solution {
public:
    double myPow(double x, int n) {
        double prod = 1;
        long long k =n;
        if(k< 0){
            k = -k;
            x = 1/x;
        }

        while( k >0){
            if( k%2==1){
                prod *= x;

            }
              x*=x;
            k = k/2;
          
        }
        
        return prod;
        
    }
};