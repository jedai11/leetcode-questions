class Solution {
public:
    double myPow(double x, int n) {
        // if(n==0) return 1.0;
        // if(x==0) return 0.0;
        // if(x==1) return 1.0;
        // if(x==-1 && n%2==0) return 1.0;
        // if(x==-1 && n%2!=0) return -1.0;
        long long bingform=n;
        bool neg=false;
        if(n<0){
            neg=true;
            bingform=-bingform;   
        }
        double ans=1;
        while(bingform>0){
            if(bingform%2==1){
                ans*=x;
            }
            x*=x;
            bingform/=2;
        }
        if(neg) return 1.0/ans;
        return ans;
    }
};