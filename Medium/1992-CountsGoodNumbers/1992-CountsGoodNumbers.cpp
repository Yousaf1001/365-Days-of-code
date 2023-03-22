class Solution {
public:
    long long   modulo=1000000007;
    long long   countGoodNumbersHelper(long long  num,long long power){
        long long result=0;
        if(power==0)
           return 1;
        else if(power==1)
           return num;
        else 
        {
            result=countGoodNumbersHelper(num,power/2);
            result =(result*result) %modulo;
            if(power%2){
                result =result * num;
                result =result %modulo;
                return result ;
            }
            else 
             return result;
        }

    }
    int countGoodNumbers(long long n) {
        //Calculating Number  of even and odd in n
        long long  oddNum=n/2;
        long long  evenNum=n/2+n%2;
        long long    GoodNumber=(countGoodNumbersHelper(5,evenNum)*countGoodNumbersHelper(4,oddNum))%modulo;
        return GoodNumber;
        
    }
};