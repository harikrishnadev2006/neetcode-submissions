class Solution {
public:
    int lower(int a, int b)
    {
        if(a < b)
            return a;
        else
            return b;
    }

    int maxArea(vector<int>& heights) {
        int area = 0;
        int maxarea = 0;

        int left = 0;
        int right = heights.size() - 1;

        while(left < right)
        {
            int lowerval = lower(heights[left], heights[right]);

            area = (right - left) * lowerval;

            if(area > maxarea)
                maxarea = area;

            if(heights[left] < heights[right])
                left++;
            else
                right--;
        }

        return maxarea;
    }
};