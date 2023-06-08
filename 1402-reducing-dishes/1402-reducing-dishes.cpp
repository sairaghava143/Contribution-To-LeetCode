class Solution {
public:
        int maxSatisfaction(std::vector<int>& satisfaction) {
        std::sort(satisfaction.begin(), satisfaction.end(), std::greater<int>());
        int total_satisfaction = 0;
        int total_like_time_coefficient = 0;
        int max_like_time_coefficient = 0;
        for (int i = 0; i < satisfaction.size(); i++) {
            total_satisfaction += satisfaction[i];
            total_like_time_coefficient += total_satisfaction;
            max_like_time_coefficient = std::max(max_like_time_coefficient, total_like_time_coefficient);
        }
        return max_like_time_coefficient;
    }
};