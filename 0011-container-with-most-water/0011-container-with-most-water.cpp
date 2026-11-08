class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int max_A=INT_MIN;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            max_A=max(max_A,(w*h));
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return max_A;
    }
};