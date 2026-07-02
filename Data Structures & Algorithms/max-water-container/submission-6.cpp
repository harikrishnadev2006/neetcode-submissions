class Solution {
public:
        int lower(int a,int b){
            if (a<b){
                return a;
            }
            else{
                return b;
            }
        }
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        int lowerval;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                lowerval=lower(heights[i],heights[j]);
                if (((j-i)*lowerval)>maxarea){
                    maxarea=(j-i)*lowerval;
                }
            }
        }
        return maxarea;
        
        
    }
};
