class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx_p=0;
        int bb=prices[0];
        for(int i=0;i<prices.size();i++){
            if(bb<prices[i]){
                mx_p=max(mx_p,prices[i]-bb);
            }
            bb=min(bb,prices[i]);
        }
        return mx_p;
    }
};