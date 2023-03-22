class Solution {
public:
    double mypowHelper(double x,long long int n)
    {
        double result=0;
        if(n==0)
            return 1;
        if(n==1)
            return x;
        else 
        {
            if(n%2==0)
            {
                result=mypowHelper(x,n/2);
                return (result*result);
            }
            else 
            {
                result=mypowHelper(x,n/2);
                return (result*result*x);
            }
        }

    }
    double myPow(double x, int n) {
        
        long long int duple=n;
           if(n<0)
               duple=-(duple);
            double result =mypowHelper(x,duple);
            if(n<0)
                return 1/result;
            return result;
        
        }
}; 