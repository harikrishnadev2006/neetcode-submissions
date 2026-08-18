class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while (low <= high) {
            int mid = (low + high) / 2;
            int hours = 0;
            for (int j = 0; j < piles.size(); j++) {
                int temp = piles[j];
                hours += temp / mid;
                if (temp % mid != 0) {
                    hours++;
                }
            }
            if (hours <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};