class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        unordered_map<int, int> hash1;

        for(int i = 0; i < position.size(); i++)
        {
            hash1[position[i]] = speed[i];
        }

        sort(position.begin(), position.end(), greater<int>());

        stack<double> st;

        for(int i = 0; i < position.size(); i++)
        {
            double time = (double)(target - position[i]) / hash1[position[i]];

            if(st.empty() || time > st.top())
            {
                st.push(time);
            }
        }

        return st.size();
    }
};